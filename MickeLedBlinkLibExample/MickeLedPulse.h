// MickeLedPulse.h

#ifndef _MICKELEDPULSE_h
#define _MICKELEDPULSE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#define MAX_NUM_OF_OUTPUTS_FOR_PULSING_LEDS 8

/*
Creates object for enabling time controlled LED ON/OFF pulse operation.*/
class MickeLedPulse
{
public:
	/*Switching single LED's on and off or alters PWM output signals for pulsing action
	*pinNo sets first LED's on Arduino output PIN.
	*/
	MickeLedPulse(uint8_t pinNo);


private:
	uint8_t _ledPinNumber;

	//enum pulsingLedStates
	//{
	//	ledNotInUse,
	//	ledOFF,
	//	ledOn
	//};

	struct pulsingLed
	{
		uint8_t pinNumber=false;//Defines to what Arduino Pin Led is connected to.
		//pulsingLedStates ledState;//Is Led selected for pulsing at the current time.
		int pulseInterval=false;//Current leds interval for complete on and off pulse.0=not enabled for pulse.
		bool pwmPulse=true;
	};

	pulsingLed _ledsToPulse[MAX_NUM_OF_OUTPUTS_FOR_PULSING_LEDS];


};



#endif

