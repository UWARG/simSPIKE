/* Simple Serial ECHO script : Written by ScottC 04/07/2012 */
/* Stage 2 : Delimiters */

/* Use a variable called byteRead to temporarily store
   the data coming from the computer */
byte byteRead;

void setup() {                
// Turn the Serial Protocol ON
  Serial.begin(9600);
}

void loop() {
   /*  check if data has been sent from the computer: */
  if (Serial.available()) {
    /* read the most recent byte */
    byteRead = Serial.read();
    
    /*Listen for a comma which equals byte code # 44 */
    if(byteRead==44){
      Serial.println();
    }else{
      /*ECHO the value that was read, back to the serial port. */
      Serial.write(byteRead);
    }
  }
}
