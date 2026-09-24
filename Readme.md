# Focus Timer

A simple physical focus timer that I am building with an Arduino Nano.

The idea is to have a small timer where I can choose a preset using buttons and see the countdown on a 4-digit 7-segment display. A buzzer will notify me when the timer is finished.

## Current setup

* Arduino Nano
* 4-digit 7-segment display (5461AS)
* 4 push buttons
* Buzzer
* Breadboard and jumper wires

## Timer presets

For testing, the buttons are planned as:

* Button 1 → 5 minutes
* Button 2 → 10 minutes
* Button 3 → 15 minutes
* Button 4 → 20 minutes

## Progress

Today I set up the Arduino Nano, power rails, buttons and buzzer. I tested the buzzer and it works.

I also identified the 7-segment display and started testing it with the SevSeg library. The test code compiled, but I ran into a COM3 upload problem with the Arduino, so the display still needs to be tested.

## Files

`focus_timer.ino` contains the Arduino code for the project.

## What's next

* Fix the Arduino upload problem
* Connect and test the 7-segment display
* Make the countdown work
* Add the timer presets
* Make the buzzer alert when the timer finishes
