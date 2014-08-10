#include "rgbLed.h"

rgbLed::rgbLed(){};

void rgbLed::begin(byte pinR, byte pinG, byte pinB){
	_pinR = pinR; 
	_pinG = pinG;
	_pinB = pinB;
}

void rgbLed::setValues(byte valR, byte valG, byte valB){
	_valR = valR;
	_valG = valG;
	_valB = valB;
}

void rgbLed::setValues(colors color){
	switch (color){
		case RED:
			_valR = 255;
			_valG = 0;
			_valB = 0;
			break;

		case GREEN:
			_valR = 0;
			_valG = 255;
			_valB = 0;
			break;

		case BLUE:
			_valR = 0;
			_valG = 0;
			_valB = 255;
			break;

		case WHITE:
			_valR = 255;
			_valG = 255;
			_valB = 255;
			break;

		default:
			Serial.println("Not valid value");
			Serial.println("Setting white");
			_valR = 255;
			_valG = 255;
			_valB = 255;

	}
}

byte rgbLed::getValues(colors color){
	switch (color){
		case RED:
			return _valR;
			break;
		case GREEN:
			return _valG;
			break;
		case BLUE:
			return _valB;
			break;
		default:
			return 0;
	}
}


void rgbLed::update(){
	analogWrite(_pinR, _valR);
	analogWrite(_pinG, _valG);
	analogWrite(_pinB, _valB);
}

void rgbLed::off(){
	analogWrite(_pinR, 0);
	analogWrite(_pinG, 0);
	analogWrite(_pinB, 0);
}