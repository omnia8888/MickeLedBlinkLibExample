// 
// 
// 

#include "MickeLedToggle.h"


/*Switching single LED's on and off or alters PWM output signals for pulsing action
*pinNo sets first LED's on Arduino output PIN.*/
MickeLedToggle::MickeLedToggle(uint8_t pinNo)
{
	//Add pinNo to first led in array
	_ledsToPulse[0].pinNumber = pinNo;
	//set pin as OUTPUT pin
	pinMode(pinNo, OUTPUT);
}

void MickeLedToggle::update()
{
	//Check leds for toggle state
	for (uint8_t ledIndex = 0; ledIndex < MAX_NUM_OF_OUTPUTS_FOR_PULSING_LEDS; ledIndex++)
	{
		if (_ledsToPulse[ledIndex].ledState = notActive)
		{
			//Do nothing
		}
		switch (_ledsToPulse[ledIndex].ledState)
		{
		case blinkMode:

			break;
		case pwmMode:

			break;
		default:
			break;
		}
	}
}


/*Enables or disables single led pulse operation
*interval sets time for complete pulse cycle in millis.(0=Pulsing shut Off)
*ledNo addresses what led in index(Default first led)*/
void MickeLedToggle::pulseLed(int interval, uint8_t ledNo)
{
	//set pulse interval
	_ledsToPulse[ledNo].pulseInterval = interval;
	_ledsToPulse[ledNo].ledState = pwmMode;
}