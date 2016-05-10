
#include <Wire.h>

#define ADDR 0x25


// read register
unsigned char readRegister(unsigned char addr_reg) {
    byte error;
    Wire.beginTransmission(ADDR);
    Wire.write(addr_reg); // register to read
    error = Wire.endTransmission();
   // Serial.print(millis());
//Serial.print("  end transmit: ");
    //Serial.println(error,HEX); 

    Wire.requestFrom(ADDR, 1); // read a byte

    while (Wire.available()) {
        return Wire.read();
    }
}

// write data to register 
unsigned char writeRegister(unsigned char addr_reg, unsigned char dta) {
    Wire.beginTransmission(ADDR);
    Wire.write(addr_reg); // register to read
    Wire.write(dta);
    Wire.endTransmission();
}

void setup() {
 byte data;

   //I2c.begin();
  
  Wire.begin();
  Serial.begin(115200);

  delay(500);

  // the operating mode (MODE)
  data = readRegister(0x05);
  Serial.print("MODE: ");
  Serial.println(data,BIN);

  // Set mode to Touch only
  writeRegister(0x05, 0x02);


  data = readRegister(0x05);
  Serial.print("MODE: ");
  Serial.println(data,BIN);

  data = readRegister(0x20);
  Serial.print("NUMBEROFXCHANNELS: ");
  Serial.println(data);

  data = readRegister(0x21);
  Serial.print("NUMBEROFYCHANNELS: ");
  Serial.println(data);

  writeRegister(0x20, 0x07);
  writeRegister(0x21, 0x06);

  data = readRegister(0x20);
  Serial.print("NUMBEROFXCHANNELS: ");
  Serial.println(data);

  data = readRegister(0x21);
  Serial.print("NUMBEROFYCHANNELS: ");
  Serial.println(data);
}

void loop() {
  byte data;

/*
// TOUCHSTATE
  data = readRegister(0x10);
  Serial.print("TOUCHSTATE: ");
  Serial.println(data,BIN);

  data = readRegister(0x11);
  Serial.print("TOUCHX: ");
  Serial.println(data,BIN);

  data = readRegister(0x12);
  Serial.print("TOUCHY: ");
  Serial.println(data,BIN);

// TOUCHLSB
  data = readRegister(0x13);
  Serial.print("TOUCHLSB: ");
  Serial.println(data,BIN);
*/

  Serial.print("SENSORVALUE_RX <i>: ");
  for (byte i = 0x80; i < 0x8E; i++) {
     data = readRegister(i);
     
     //Serial.print(i, HEX);
    //Serial.print(" = ");
    Serial.print(data,BIN);
    Serial.print(", ");
  }
  Serial.println();
  /*
    data = readRegister(0x80);
    Serial.print("SENSORVALUE<RX0>: ");
    Serial.println(data,BIN);
    data = readRegister(0x8D);
    Serial.print("SENSORVALUE<RX13>: ");
    Serial.println(data,BIN);
    data = readRegister(0x86);
    Serial.print("SENSORVALUE<RX6>: ");
    Serial.println(data,BIN);
*/
    delay(500);
}
