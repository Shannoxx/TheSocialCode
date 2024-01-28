# TheSocialCode
The Social Code Hackathon Project submission by Team QuantumQuarters Crew

This project aims to IoT enable any appliance, regardless of make or model, making it accessible to the user to control over a simple app on their smartphones. It aids in energy conservation by remotely controlling all the user's home appliances from anywhere in the world. Privacy is also ensured by the 32 character auth key encrypted by the Blynk IoT app. 

In our model, we have used an ESP8266 board, a Wemos D1 R2, to be exact and have used Light Emitting Diodes to represent Lighting Appliances and a simple DC motor controlled by the ESP board through a DRV8833 motor driver to represent a Fan. The Blynk App has been designed with buttons for each individual LED and a slider to control the DC motor (fan) speed. 

This model can also provide a low cost and efficient method for measuring the energy consumption of each individual appliance connected to it by the means of a simple hardware module and can bring any non-smart device into the IoT ecosystem just by means of a few relay modules. Since the esp development board is completely open-source, future upgrades to it will be easily carried out and can be tinkered with by anyone with an intermediate knowledge in the field of microcontrollers. The best part about this is that it can be reprogrammed any number of times to suit exactly the needs of that particular user. Even AI/ML based energy monitoring and oonservation models can be integrated into this project and make it further useful. 

Due to our hardware and time constraints, we have only been able to use LEDs and DC motor to showcase our idea. However, these can be replaced by any AC appliance like an LED Bulb, TV, airconditioner etc. just by linking it to the ESP8266 by means of a single/multi channel relay. 
