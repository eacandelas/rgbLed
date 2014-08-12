#ifndef rgbLed_h
#define rgbLed_h

#include <Arduino.h>

#define FLASH_DELAY 500

enum  colors{
	RED, 
	GREEN,
	BLUE,
	WHITE
} ;

class rgbLed {

public:
	rgbLed();
	// ~rgbLed();

	void begin(byte pinR, byte pinG, byte pinB);
	void setValues(byte valR, byte valG, byte valB);
	void setValues(colors color);
	byte getValues(colors color);
	void update();
	void off();


private:
	byte _pinR;
	byte _pinG;
	byte _pinB;
	byte _valR;
	byte _valG;
	byte _valB;

};

#endif

