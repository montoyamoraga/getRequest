// sigues-ahi

// a project by aaron montoya-moraga
// github.com/montoyamoraga/sigues-ahi

// started in september 2020
// alpha state
// it is working but it is messy

// conditional compilation
#ifndef SIGUES_AHI_H
#define SIGUES_AHI_H

// include libraries
#include <Arduino.h>
#include <Arduino_JSON.h>
#include <ArduinoJson.h>
#include <SPI.h>
#include <WiFiNINA.h>

class SiguesAhi {
public:

  // constructor
  SiguesAhi();
  
  // other functions
  void initialize();

  void setPageID(int newID);
  String getPageID();

  // TODO: add API so that this variable can be protected
  boolean wikiStillExists = true;

protected:
  String wikiPageID;

};

// conditional compilation
#endif