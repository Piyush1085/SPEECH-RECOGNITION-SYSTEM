# SPEECH-RECOGNITION-SYSTEM

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: PIYUSH THAKUR

*INTERN ID*: CT04WK180

*DOMAIN*: EMBEDDED SYSTEM 

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

# PROJECT : SPEECH RECOGNITION SYSTEM

# PROJECT PROBLEM STATEMENT:-
BUILD A BASIC SPEECH RECOGNITION SYSTEM FOR COMMAND-BASED CONTROL OF DEVICES USING AN EMBEDDED BOARD.

# Components Required:
Arduino Uno/Nano Bluetooth Module (e.g., HC-05 or HC-06) 4-Channel Relay Module Smartphone with a Bluetooth terminal app Electrical appliances (e.g., LED, fan) Breadboard and jumper wires

# Circuit Connections:
Bluetooth Module (HC-05):
VCC → 5V (Arduino)
GND → GND (Arduino) 
TX → RX (Arduino) 
RX → TX (Arduino) 

Relay Module:
IN1 → Pin 8 (Arduino) 
IN2 → Pin 9 (Arduino) 
IN3 → Pin 10 (Arduino) 
IN4 → Pin 11 (Arduino) 
VCC → 5V (Arduino)
GND → GND (Arduino)

# APPLIANCES:
Connect each appliance's positive terminal to a relay's NO (Normally Open) terminal. Connect the common (COM) terminal of each relay to the power source.

# POWER SUPPLY:
Ensure the relays can handle the voltage and current of connected devices. For safety, use a separate power supply for high-voltage appliances.

# WORKING:
Pair the HC-05 module with your smartphone. Use the default PIN (1234 or 0000). Open a Bluetooth terminal app. Send the following commands to control devices: 
1: Turn ON Device 1 
2: Turn OFF Device 1
3: Turn ON Device 2 
4: Turn OFF Device 2 
5-8: Control Device 3 and Device 4 similarly

# CIRCUIT DIAGRAM


