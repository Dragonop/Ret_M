/*
  Ret_M.h - Version 1.0
  Library for a delay method without 
  the delay() function and no actual delays.
  Created by Carlos Joaquin Villalba, October 18, 2018.
  Released under GNU GPLv3.
*/

#ifndef Ret_M_h
#define Ret_M_h

#include "Arduino.h"

class Ret_M
{
  public:
    Ret_M(long intervalo);
    bool ret();

  private:
    unsigned long _millis_ant;
    long _intervalo;
};
#endif