# motion-relay

In this project we will be triggering a relay with an ultrasonic distance sensor HC-SR04.

<b> Essentials </b> 

<b> Electronic equipment: </b>

Arduino UNO

HC-SR04 Ultrasonic Sensor

Power Relay (I used a Songle srd-05vdc-sl-c)

A breadboard


<b> Cables: </b>

A regular extension cord 

5 Watt fan with a power cable 

Jumper cables (male/female for the relay and male/male for the Arduino and the HC-SR04)

A breadboard


<b> Connections: </b>


Connections are as follows:

Pin 9: Relay Output

Pin 6: Echo

Pin 5: Trigger 

<b> Safety warning </b>

This tutorial support 5V electrics!
Do not try it with higher voltage! 

<b> Install Arduino Software </b>

Download Arduino software from the Arduino website: http://arduino.cc If you’ve not used an Arduino before, you’ll want to spend some time familiarizing yourself with the basics. Check out the Arduino website for some great beginner tutorials.

<b> Buildin the circuit </b>

This is an easy circuit to assemble using a solderless breadboard. 
Hook all parts as shown in the illustration in folder (circuit.png) , using jumper wires to connect each sensor circuit to the analog inputs on your Arduino.

<b> Programming the Arduino </b>

Next we’ll upload the Arduino sketch (motion.relay.ino) to the device. Connectyour Arduino to your computer using a USB cable and make sure the right board and serial port are selected (see the appropriate “Getting Started” section for your operating system: http://arduino.cc/en/Guide/HomePage).

Open the “motion.relay.ino” file with your Arduino software and upload it to the board. Some LEDs should blink on the Arduino board, and after a few moments, you should see “Done Uploading” in the console area of the Arduino software.

Your sketch should now be running!

<b> Troubleshooting </b>

If it’s not working...

Check all connections. Make sure all components and jumper wires are in the appropriate rows in the solderless breadboard. Make sure you’ve connected to the correct pins on the Arduino.

Use a multimeter to test your circuit. Hook it up in voltage testing mode to test the voltage coming from each photoresistor
