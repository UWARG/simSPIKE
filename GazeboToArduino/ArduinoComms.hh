#ifndef _ARDUINO_COMMS_HH_
#define _ARDUINO_COMMS_HH_

#include <SerialStream.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;
using namespace LibSerial;

class Arduino{
    private:
        SerialStream serial_port;
        string portName;

    public:
        Arduino();
        void Init(string input);
        bool DataAvailable();
        string GetData();
        
        void SendData(string input)
        {
            serial_port << input;  
        }
};

Arduino::Arduino()
{
    portName = "/dev/ttyACM1";
}

void Arduino::Init(string input)
{
    portName = input;
    
    serial_port.Open( portName ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "[" << __FILE__ << ":" << __LINE__ << "] " << "Error: Could not open serial port." << std::endl ;
        exit(1) ;
    }
    //
    // Set the baud rate of the serial port.
    //
    serial_port.SetBaudRate( SerialStreamBuf::BAUD_9600 ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "Error: Could not set the baud rate." << std::endl ;
        exit(1) ;
    }
    //
    // Set the number of data bits.
    //
    serial_port.SetCharSize( SerialStreamBuf::CHAR_SIZE_8 ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "Error: Could not set the character size." << std::endl ;
        exit(1) ;
    }
    //
    // Disable parity.
    //
    serial_port.SetParity( SerialStreamBuf::PARITY_NONE ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "Error: Could not disable the parity." << std::endl ;
        exit(1) ;
    }
    //
    // Set the number of stop bits.
    //
    serial_port.SetNumOfStopBits( 1 ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "Error: Could not set the number of stop bits." << std::endl ;
        exit(1) ;
    }
    //
    // Turn off hardware flow control.
    //
    serial_port.SetFlowControl( SerialStreamBuf::FLOW_CONTROL_NONE ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "Error: Could not use hardware flow control." << std::endl ;
        exit(1) ;
    }

     // Wait for some data to be available at the serial port.
    while( serial_port.rdbuf()->in_avail() == 0 )
    {
        usleep(100) ;
    }
}

bool Arduino::DataAvailable()
{
    if (serial_port.rdbuf()->in_avail() > 0)
        return 1;
    else
        return 0;
}

string Arduino::GetData()
{
    string output;
    output = "";

    bool packetReceived = 0;
    bool packetStarted = 0;
    while (!packetReceived){
        if (serial_port.rdbuf()->in_avail() == 1)
        {
            char next_byte;
            serial_port.get(next_byte);
            if (!packetStarted)
            {
                if (next_byte == '(')
                    packetStarted = 1;
            }

            else
            {
                if (next_byte == ')')
                    packetReceived = 1;
                else
                    output += next_byte;
            }
        }
    }
    
    return output;
}

#endif