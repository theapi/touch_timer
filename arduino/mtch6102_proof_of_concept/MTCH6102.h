
#ifndef MTCH6102_H
#define MTCH6102_H

#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include <Wire.h>

// The default I2C address
#define MTCH6102_I2CADDR_DEFAULT   0x25


#define MTCH6102_MODE              0x05
#define MTCH6102_MODE_TOUCH   0010
#define MTCH6102_MODE_FULL    0011
#define MTCH6102_MODE_GESTURE 0001
#define MTCH6102_MODE_RAW     0100
#define MTCH6102_MODE_STANDBY 0000

#define MTCH6102_NUMBEROFXCHANNELS 0x20
#define MTCH6102_NUMBEROFYCHANNELS 0x21
#define MTCH6102_TOUCHSTATE        0x10
#define MTCH6102_TOUCHX            0x11
#define MTCH6102_TOUCHY            0x12
#define MTCH6102_TOUCHLSB          0x13

#define MTCH6102_SENSORVALUE_RX0   0x80
#define MTCH6102_SENSORVALUE_RX1   0x81
#define MTCH6102_SENSORVALUE_RX2   0x82
#define MTCH6102_SENSORVALUE_RX3   0x83
#define MTCH6102_SENSORVALUE_RX4   0x84
#define MTCH6102_SENSORVALUE_RX5   0x85
#define MTCH6102_SENSORVALUE_RX6   0x86
#define MTCH6102_SENSORVALUE_RX7   0x87
#define MTCH6102_SENSORVALUE_RX8   0x88
#define MTCH6102_SENSORVALUE_RX9   0x89
#define MTCH6102_SENSORVALUE_RX10  0x8A
#define MTCH6102_SENSORVALUE_RX11  0x8B
#define MTCH6102_SENSORVALUE_RX12  0x8C
#define MTCH6102_SENSORVALUE_RX13  0x8D
#define MTCH6102_SENSORVALUE_RX14  0x8E

class MTCH6102 {
  public:
  
    MTCH6102(void);
    
    boolean begin(uint8_t i2caddr = MTCH6102_I2CADDR_DEFAULT);
    
    uint8_t readRegister(uint8_t reg);
    void writeRegister(uint8_t reg, uint8_t value);
    
    void setMode(uint8_t mode);
    
  private:
    int8_t _i2caddr;
};

#endif // MTCH6102_H
