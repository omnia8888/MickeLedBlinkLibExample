// 
// 
// 

#include "MickeLedPulse.h"

/*Switching single LED's on and off or alters PWM output signals for pulsing action
*pinNo sets first LED's on Arduino output PIN.*/
MickeLedToggle::MickeLedToggle(uint8_t pinNo)
{
	//Add pinNo to first led in array
	_ledsToPulse[0].pinNumber = pinNo;
	//set pin as OUTPUT pin
	pinMode(pinNo, OUTPUT);
}


/*Enables or disables single led pulse operation
*interval sets time for complete pulse cycle in millis.(0=Pulsing shut Off)
*ledNo addresses what led in index(Default first led)
*pwmPulse used for disable PWM pulse operation*/
void MickeLedToggle::pulseLed(int interval, uint8_t ledNo, bool pwmPulse)
{
	//set pulse interval
	_ledsToPulse[ledNo].pulseInterval = interval;
	_ledsToPulse[ledNo].pwmPulse = pwmPulse;
}




