/* 
  Krypton.h - Library for Krypton ion thruser control board
  Created by Dejan Lukić @ OberonSPACE, November 15, 2019.
  MIT License
  (C) 2019, OberonSPACE.
*/
#ifndef Krypton_H
#define Krypton_H

#include "Arduino.h"

class Krypton
{
  public:
    Krypton(int pin);
    void thrust();
    void fuel_ctrl();
    void pump_ctrl();
    void voltage_ctrl();
    void altitude();
  private:
    int _pin;
};

#endif
