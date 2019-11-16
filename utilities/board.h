/* 
  board.h - Library for Krypton ion thruser control board
  Created by Dejan Lukić @ OberonSPACE, November 15, 2019.
  MIT License
  (C) 2019, OberonSPACE.
*/
#ifndef board_h
#define board_h

#include "Arduino.h"

class board
{
  public:
    board();
    void compatible(bool iscompatible);
    void state(char status[] = "");
    void sudo(char command[] = "");
    void 
};

#endif
