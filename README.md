rgbLed arduino library
============================

A simple library to use rgb leds as objets.

Init library by:

'rgbLed rgb;'

Set pins with, pins need to have pwm:

'rgb.begin(pinR, pinG, pinB)'

Start values by passing the R, G , B values using (0 to 255):

'rgb.setValues(R,G,B)'

Write the values to the pins with:

'rgb.update()'

Turn off leds:

'rgb.off()'

Make led flash multiple times by using:

'rgb.flash(times)'

set *times* to the number of flashing sequired.

Wrote by: Eden Candelas, Hackerspace Monterrey.
