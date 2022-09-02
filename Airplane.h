#include<iostream>
#include<string>
#include"person.h"
#ifndef AIRPLANE_H
#define AIRPLANE_H
 class Airplane{
    public:
      string callsign;
      person thepilot; 
      person thecopilot;
      string p1;
      string p2;
      Airplane(std::string callsign, person thepilot, person thecopilot);
      void setpilot (person thepilot)
      person getpilot();
      void setcopilot (person thecopilot)
      person getcopilot();
      void printDetails(); 
}