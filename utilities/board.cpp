/* 
  board.cpp - Library for Krypton ion thruser control board
  Created by Dejan Lukić @ OberonSPACE, November 15, 2019.
  MIT License
  (C) 2019, OberonSPACE.
*/
#include "Arduino.h"
#include "../src/Krypton.h"
#include "board.h"

board::board(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;  
}

void board::compatible(bool iscompatible)
{
  if(iscompatible = true)
  {
    
  }
  else
  {
    throw std::runtime_error( "board incompatible." );
  }
}