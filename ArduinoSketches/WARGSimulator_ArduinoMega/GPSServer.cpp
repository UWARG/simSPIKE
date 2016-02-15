#include "GPSServer.h"
#include <SPI.h>

GPSData gpsState;

const int SSpin = 53;
SPISettings settingsA(2000000,MSBFIRST,SPI_MODE0);

void initGPS(){
  //Start up SPI
  SPI.setDataMode(SPI_MODE0);
  SPI.setBitOrder(MSBFIRST);
  SPI.setClockDivider(SPI_CLOCK_DIV128); // 16/4 MHz
  
  SPI.begin(); 
  //Setup slave select pin
  pinMode(SSpin, OUTPUT);
  digitalWrite(SSpin, HIGH);
//  SPISettings settingsA(2000000,MSBFIRST,SPI_MODE0);
}

void sendGPS(){
  
  //Pull down SS pin
  digitalWrite(SSpin, LOW); 
//  SPI.beginTransaction(settingsA);

  //Get the char pointer to the data to send
  int* dataPointer = (int*)&gpsState;
  
  for (int i = 0; i < sizeof(GPSData)/2; i++){
    SPI.transfer16(dataPointer[i]);
    Serial.println(dataPointer[i]);
    }
//  SPI.endTransaction();
  digitalWrite(SSpin, HIGH);
//  Serial.println("Sent");

}

GPSData getGPS(){
  //Format the GPS struct and return
  return gpsState;
}

void setGPS(){
//  #if STANDALONE_TEST_MODE
  //Store the GPS Data and return
  gpsState.latitude = 0;
  gpsState.latitude1 = 0; 
  gpsState.longitude = 0;
  gpsState.longitude1 = 0;
  gpsState.gpstime = 8;
  gpsState.gpsspeed = 8;
  gpsState.altitude = 8;
  gpsState.heading = 8;
  gpsState.satellites = 8;
  gpsState.positionFix = 2;
//  #endif
 //Serial.println("Written");
  
}

