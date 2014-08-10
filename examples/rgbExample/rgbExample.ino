#include <rgbLed.h>

rgbLed rgb;


void setup(){
	rgb.begin(9,10,11);
}

void loop(){
	rgb.setValues(RED);
	rgb.update();
	delay(1000);
	rgb.setValues(GREEN);
	rgb.update();
	delay(1000);
	rgb.setValues(BLUE);
	rgb.update();
	delay(1000);
	rgb.setValues(WHITE);
	rgb.update();
	delay(1000);
	rgb.setValues(200,0,200);
	rgb.update();
	delay(1000);
	rgb.setValues(200,200,100);
	rgb.update();
	delay(1000);
}