/*
 * There are three serial ports on the ESP known as U0UXD, U1UXD and U2UXD.
 * 
 * U0UXD is used to communicate with the ESP32 for programming and during reset/boot.
 * U1UXD is unused and can be used for your projects. Some boards use this port for SPI Flash access though
 * U2UXD is unused and can be used for your projects.
 * 
*/

#define RXD2 16
#define TXD2 17

void setup() {
  // Note the format for setting a serial port is as follows: Serial2.begin(baud-rate, protocol, RX pin, TX pin);
  Serial.begin(115200);
  //Serial1.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Serial.println("Serial Txd is on pin: "+String(TX));
  Serial.println("Serial Rxd is on pin: "+String(RX));
}

void loop() { //Choose Serial1 or Serial2 as required
  while (Serial2.available()) {
    Serial.print(char(Serial2.read()));
  }
}


/* Baud-rates available: 300, 600, 1200, 2400, 4800, 9600, 14400, 19200, 28800, 38400, 57600, or 115200, 256000, 512000, 962100
 *  
 *  Protocols available:
 * SERIAL_5N1   5-bit No parity 1 stop bit
 * SERIAL_6N1   6-bit No parity 1 stop bit
 * SERIAL_7N1   7-bit No parity 1 stop bit
 * SERIAL_8N1 (the default) 8-bit No parity 1 stop bit
 * SERIAL_5N2   5-bit No parity 2 stop bits 
 * SERIAL_6N2   6-bit No parity 2 stop bits
 * SERIAL_7N2   7-bit No parity 2 stop bits
 * SERIAL_8N2   8-bit No parity 2 stop bits 
 * SERIAL_5E1   5-bit Even parity 1 stop bit
 * SERIAL_6E1   6-bit Even parity 1 stop bit
 * SERIAL_7E1   7-bit Even parity 1 stop bit 
 * SERIAL_8E1   8-bit Even parity 1 stop bit 
 * SERIAL_5E2   5-bit Even parity 2 stop bit 
 * SERIAL_6E2   6-bit Even parity 2 stop bit 
 * SERIAL_7E2   7-bit Even parity 2 stop bit  
 * SERIAL_8E2   8-bit Even parity 2 stop bit  
 * SERIAL_5O1   5-bit Odd  parity 1 stop bit  
 * SERIAL_6O1   6-bit Odd  parity 1 stop bit   
 * SERIAL_7O1   7-bit Odd  parity 1 stop bit  
 * SERIAL_8O1   8-bit Odd  parity 1 stop bit   
 * SERIAL_5O2   5-bit Odd  parity 2 stop bit   
 * SERIAL_6O2   6-bit Odd  parity 2 stop bit    
 * SERIAL_7O2   7-bit Odd  parity 2 stop bit    
 * SERIAL_8O2   8-bit Odd  parity 2 stop bit    
*/

