# BSFrance-avr

This core will allow you to use BSFrance AVR based boards with the Arduino ecosystem.

# How to install

At first drivers for the usb-serial (VCP, Virtual Com Port) has to be installed. This applies to Windows only, Mac OSX and Linux users wont have to install drivers (in most cases).

  - Plug the board to USB and proceed with the driver setup.
Then Core files can be installed:

  - Download and unzip this repository to Documents / Arduino / hardware folder. Note : Documents / Arduino is the default location, if you use another location principle is still the same. If you dont have any Hardware folder in Documents / Arduino create it and unzip the BSFrance repository in it. If you already have a BSFrance folder you can directly drop the STM32 folder in it.

  - Launch Arduino IDE, select BSFrance LoRa32u4 / LoRa32u4II boards in the Tool / board menu, select the correct serial port in the Tool / port menu. Your board is now ready to use with Arduino IDE.
