#ifndef _ARDUINO_COMMS_HH_
#define _ARDUINO_COMMS_HH_

#include <SerialStream.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <string>
// #include <sstream>

// using namespace std;
// using namespace LibSerial;

// class Arduino{
//     private:
//     SerialStream serial_port;
//     string portName;

//     public:
//         Arduino();
//         Init();
//         bool DataAvailable();
//         string GetData();
//         SendData();

//         void setPortName(string input){
//             portName = input;
//         }





// };

// Arduino::Arduino()
// {
//     portName = "/dev/ttyACM1";
// }

// Arduino::Init()
// {
//     serial_port.Open( portName ) ;
//     if ( ! serial_port.good() )
//     {
//         std::cerr << "[" << __FILE__ << ":" << __LINE__ << "] " << "Error: Could not open serial port." << std::endl ;
//         exit(1) ;
//     }
//     //
//     // Set the baud rate of the serial port.
//     //
//     serial_port.SetBaudRate( SerialStreamBuf::BAUD_9600 ) ;
//     if ( ! serial_port.good() )
//     {
//         std::cerr << "Error: Could not set the baud rate." << std::endl ;
//         exit(1) ;
//     }
//     //
//     // Set the number of data bits.
//     //
//     serial_port.SetCharSize( SerialStreamBuf::CHAR_SIZE_8 ) ;
//     if ( ! serial_port.good() )
//     {
//         std::cerr << "Error: Could not set the character size." << std::endl ;
//         exit(1) ;
//     }
//     //
//     // Disable parity.
//     //
//     serial_port.SetParity( SerialStreamBuf::PARITY_NONE ) ;
//     if ( ! serial_port.good() )
//     {
//         std::cerr << "Error: Could not disable the parity." << std::endl ;
//         exit(1) ;
//     }
//     //
//     // Set the number of stop bits.
//     //
//     serial_port.SetNumOfStopBits( 1 ) ;
//     if ( ! serial_port.good() )
//     {
//         std::cerr << "Error: Could not set the number of stop bits." << std::endl ;
//         exit(1) ;
//     }
//     //
//     // Turn off hardware flow control.
//     //
//     serial_port.SetFlowControl( SerialStreamBuf::FLOW_CONTROL_NONE ) ;
//     if ( ! serial_port.good() )
//     {
//         std::cerr << "Error: Could not use hardware flow control." << std::endl ;
//         exit(1) ;
//     }

//      // Wait for some data to be available at the serial port.
//     while( serial_port.rdbuf()->in_avail() == 0 )
//     {
//         usleep(100) ;
//     }
// }

// Arduino::DataAvailable()
// {

// }


int main( int    argc,
      char** argv  )
{
    //
    // Open the serial port.
    //
    using namespace std;
    using namespace LibSerial ;
    SerialStream serial_port ;

    serial_port.Open( "/dev/ttyACM1" ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "[" << __FILE__ << ":" << __LINE__ << "] "
                  << "Error: Could not open serial port."
                  << std::endl ;
        exit(1) ;
    }
    //
    // Set the baud rate of the serial port.
    //
    serial_port.SetBaudRate( SerialStreamBuf::BAUD_9600 ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "Error: Could not set the baud rate." <<  
std::endl ;
        exit(1) ;
    }
    //
    // Set the number of data bits.
    //
    serial_port.SetCharSize( SerialStreamBuf::CHAR_SIZE_8 ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "Error: Could not set the character size." <<  
std::endl ;
        exit(1) ;
    }
    //
    // Disable parity.
    //
    serial_port.SetParity( SerialStreamBuf::PARITY_NONE ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "Error: Could not disable the parity." <<  
std::endl ;
        exit(1) ;
    }
    //
    // Set the number of stop bits.
    //
    serial_port.SetNumOfStopBits( 1 ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "Error: Could not set the number of stop bits."
                  << std::endl ;
        exit(1) ;
    }
    //
    // Turn off hardware flow control.
    //
    serial_port.SetFlowControl( SerialStreamBuf::FLOW_CONTROL_NONE ) ;
    if ( ! serial_port.good() )
    {
        std::cerr << "Error: Could not use hardware flow control."
                  << std::endl ;
        exit(1) ;
    }
    //
    // Do not skip whitespace characters while reading from the
    // serial port.
    //
    // serial_port.unsetf( std::ios_base::skipws ) ;
    //
    // Wait for some data to be available at the serial port.
    //
    //
    // Keep reading data from serial port and print it to the screen.
    //
 // Wait for some data to be available at the serial port.
    //
    //while(1){
        while( serial_port.rdbuf()->in_avail() == 0 )
        {
            usleep(100) ;
        }


        // char num[5];
        // char out_buf[] = "1,2,3,4,5";
        // //serial_port << out_buf;

        // //for(int i = 0; i<5; i++){
        //     serial_port >> num;
        //     std::cout << num;
        // //}


        usleep(10000);
        
        char next_byte;
        serial_port.get(next_byte);
        std::cerr << next_byte;

        char out_buf[] = "1,2,3,4,5";
        serial_port << out_buf;
        while( 1  )
        {
            if (serial_port.rdbuf()->in_avail() > 0)
            {
                char next_byte;
                serial_port.get(next_byte);
                std::cerr << next_byte;
            }
            //serial_port << 'C';
        }

        // std::cerr << std::endl ;
    //}
    return EXIT_SUCCESS ;
}
#endif