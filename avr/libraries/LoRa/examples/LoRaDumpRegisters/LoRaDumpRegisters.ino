/*
  LoRa register dump

  This examples shows how to inspect and output the LoRa radio's
  registers on the Serial interface
*/
#include <SPI.h>              // include libraries
#include <LoRa.h>

// uncomment the section corresponding to your board
// BSFrance 2017 contact@bsrance.fr 

//  //LoR32u4 433MHz V1.0 (white board)
//  #define SCK     15
//  #define MISO    14
//  #define MOSI    16
//  #define SS      1
//  #define RST     4
//  #define DI0     7
//  #define BAND    433E6 
//  #define PABOOST true

//  //LoR32u4 433MHz V1.2 (white board)
//  #define SCK     15
//  #define MISO    14
//  #define MOSI    16
//  #define SS      8
//  #define RST     4
//  #define DI0     7
//  #define BAND    433E6 
//  #define PABOOST true 

  //LoR32u4II 868MHz or 915MHz (black board)
  #define SCK     15
  #define MISO    14
  #define MOSI    16
  #define SS      8
  #define RST     4
  #define DI0     7
  #define BAND    868E6  // 915E6
  #define PABOOST true 
  


void setup() {
  Serial.begin(9600);               // initialize serial
  while (!Serial);

  Serial.println("LoRa Dump Registers");

  LoRa.setPins(SS,RST,DI0); // CS, reset, IRQ pin

  if (!LoRa.begin(BAND,PABOOST)) {         
    Serial.println("LoRa init failed. Check your connections.");
    while (true);                   // if failed, do nothing
  }

  LoRa.dumpRegisters(Serial);
}


void loop() {
}

