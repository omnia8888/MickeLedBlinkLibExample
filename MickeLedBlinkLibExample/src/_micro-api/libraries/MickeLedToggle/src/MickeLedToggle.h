// MickeLedToggle.h

#ifndef _MICKELEDTOGGLE_h
#define _MICKELEDTOGGLE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#define MAX_NUM_OF_OUTPUTS_FOR_PULSING_LEDS 8

/*
Creates object for enabling time controlled LED ON/OFF pulse operation.

*/
class MickeLedToggle
{
public:
	/*
	*/
	MickeLedToggle(uint8_t pinNo);

	void update();

	void pulseLed(int interval, uint8_t ledNo = 0);


private:
	uint8_t _ledPinNumber;

	enum ledToggleStates
	{
		notActive = 0,
		blinkMode = 1,
		pwmMode = 2
	};

	struct pulsingLed
	{
		uint8_t pinNumber = false;//Defines to what Arduino Pin Led is connected to.
								  //pulsingLedStates ledState;//Is Led selected for pulsing at the current time.
		int pulseInterval = false;//Current leds interval for complete on and off pulse.0=not enabled for pulse.
		ledToggleStates ledState = notActive;
		bool pwmPulse = true;
	};

	pulsingLed _ledsToPulse[MAX_NUM_OF_OUTPUTS_FOR_PULSING_LEDS];


};
#endif

