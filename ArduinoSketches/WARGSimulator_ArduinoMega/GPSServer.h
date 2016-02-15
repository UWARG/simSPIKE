
#ifndef GPSSERVER
#define GPSSERVER

typedef struct _GPSData {
  float latitude; //4
  float latitude1; //4
  float longitude;//4
  float longitude1;//4
  float gpstime;//4
  float gpsspeed;//4
  int altitude;//2
  int heading;//2
  char satellites;//1
  char positionFix;//1 => 15bits Total (30/2)
} GPSData;

void initGPS();
void sendGPS();
GPSData getGPS();
void setGPS();


#endif
