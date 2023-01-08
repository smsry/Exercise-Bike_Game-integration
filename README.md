# Exercise-Bike_Game-integration

- Uses a regular Arduino UNO.
- The Cadence sensor in the Exercise bike is directly connected to the Arduino's input pin and GND.
- The Arduino I use has a CH340 chip, so Flashing Unojoy was'nt possible so Instead I just wrote a Python script to convert Serial output from the Arduino into Keyboard inputs.

If you want to make something like this, I highly recommend using micro-controllers which have USB HID interface options(like Pro Micro, Leonardo etc) as that will not require a seperate Python script to run in the Background.

Python Dependencies you'll need for running this:
   - pyserial    
   - keyboard


Video Demo of it working: 

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/EMtLiAagPFI/0.jpg)](https://www.youtube.com/watch?v=EMtLiAagPFI)

