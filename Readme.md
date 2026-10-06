# Focus Timer

Focus Timer is an Arduino-based timer made with an Arduino Nano, a 32×8 MAX7219 LED matrix, a joystick, and a buzzer.

The timer has preset durations and uses the joystick to control the timer. The matrix shows the countdown, and the buzzer sounds when the timer reaches zero.

## Features

* 5, 10, 15 and 20 minute presets
* 32×8 LED matrix countdown
* Joystick controls
* Start, pause, resume and reset
* Buzzer notification when the timer ends
* Sleep mode after inactivity

## Components

| Component               |  Quantity |
| ----------------------- | --------: |
| Arduino Nano            |         1 |
| 32×8 MAX7219 LED Matrix |         1 |
| Joystick Module         |         1 |
| Buzzer                  |         1 |
| Jumper Wires            | As needed |

## Wiring

### 32×8 MAX7219 Matrix

| Matrix | Arduino Nano |
| ------ | ------------ |
| VCC    | 5V           |
| GND    | GND          |
| DIN    | D11          |
| CS     | D10          |
| CLK    | D13          |

### Joystick

| Joystick | Arduino Nano |
| -------- | ------------ |
| VCC      | 5V           |
| GND      | GND          |
| VRX      | A0           |
| VRY      | A1           |
| SW       | D3           |

### Buzzer

| Buzzer   | Arduino Nano |
| -------- | ------------ |
| Positive | A2           |
| Negative | GND          |

## Wiring Diagram

I made the wiring diagram myself and included it in the repository to show the connections used in the actual build.

## Assembly

1. Connect the MAX7219 matrix to the Arduino Nano.
2. Connect the joystick to the Nano.
3. Connect the buzzer to A2 and GND.
4. Upload the Arduino sketch.
5. Power the project and use the joystick to select a timer preset.
6. Press the joystick to start the countdown.

## How It Works

When the project starts, the matrix shows the timer interface.

The joystick is used to select one of the preset timer durations. Pressing the joystick starts the timer. The timer can be paused, resumed or reset using the joystick.

The remaining time is displayed on the 32×8
