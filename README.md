# Automated-Door-Opener

A simple automated door opener using  Arduino Uno, Numberpad and 9g Servo. It also includes a GUI made using Processing IO.
This project can further be developed in order to open the door either using facial recognition or a password.

## Circuit diagram - 

![alt circuit](https://github.com/adimehta03/Automated-Door-Opener/blob/master/final.png)

## GUI made using Processing IO- 

![alt gui](https://github.com/adimehta03/Automated-Door-Opener/blob/master/proio.png)

## To run the program - 
Open the <a href="https://github.com/adimehta03/Automated-Door-Opener/blob/master/sketch_4x4_keypad/sketch_4x4_keypad.pde">sketch_4x4_keypad.pde</a> and hit Ctrl+F and type COM3, replace it with the serial port to which your Arduino is connected to.

Open the <a href="https://github.com/adimehta03/Automated-Door-Opener/blob/master/keypad/keypad.ino">keypad.ino</a> upload the code to your Arduino and open your Serial Monitor and start entering the password on the keypad. If it matches "1234" the servo motor will open the door latch, thereby opening the door.


#### Date Created- 20 March, 2020
