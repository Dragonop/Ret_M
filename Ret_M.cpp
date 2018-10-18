/*
  Ret_M.cpp - Version 1.0
  Library for a delay method without 
  the delay() function and no actual delays.
  Created by Carlos Joaquin Villalba, October 18, 2018.
  Released under GNU GPLv3.
*/

#include "Arduino.h"
#include "Ret_M.h"

Ret_M::Ret_M(long intervalo)
{
	_intervalo = intervalo;
}

bool Ret_M::ret()
{
	if ((millis() - _millis_ant) >= _intervalo)
	{
		_millis_ant = millis();
		return true;
	} 
	else{
		return false;
	}
}