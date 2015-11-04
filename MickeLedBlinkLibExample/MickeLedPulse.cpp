// 
// 
// 

#include "MickeLedPulse.h"

MickeLedPulse::MickeLedPulse(uint8_t pinNo)
{
	//Add pinNo to first led in array
	_ledsToPulse[0].pinNumber = pinNo;
	//set pin as OUTPUT pin
	pinMode(pinNo, OUTPUT);
}




