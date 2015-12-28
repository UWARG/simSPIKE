#include <stdio.h>
#include <string.h>

char serialPortFilename[] = "/dev/ttyACM0";

int main()
{
	FILE *serPort = fopen(serialPortFilename, "w");

	if (serPort == NULL)
	{
		printf("ERROR");	
		return 0;
	}

	char writeBuffer[] = {'1'};

	fwrite(writeBuffer, sizeof(char), sizeof(writeBuffer), serPort);
	fclose(serPort);
	return 0;

}

// #include &lt SerialStream.h &gt
// #include &lt iostream &gt
// #define PORT "/dev/ttyUSB0" //This is system-specific

// SerialStream ardu;

// using namespace std;
// using namespace LibSerial;

// void open(){
//     /*The arduino must be setup to use the same baud rate*/ 
//     ardu.Open(PORT);    
//     ardu.SetBaudRate(SerialStreamBuf::BAUD_9600);  
//     ardu.SetCharSize(SerialStreamBuf::CHAR_SIZE_8);

// }	

// int get(char out){    
//     // int res;
//     // char str[SOME_BIG_SIZE];
//     // ardu << out;
//     // ardu >> str;
//     // sscanf(str,"%d",&res);
//     // return res;
// }

// int main(){

// 	// while(1){
// 	// 	printf(get("1,2,3,4,5"));
// 	// }
// 	return 0;
// }