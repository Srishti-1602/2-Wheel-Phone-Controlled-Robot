# 3-Wheel-Phone-Controlled-Robot
Here is the basic and a very simple project on IoT. Starting from the very first step till the completion of the project, I have added all the steps that you will be needing. 

![3-wheel-robot](https://user-images.githubusercontent.com/88929699/152636674-ce237737-3329-446e-aca5-0ca33d0bbde7.jpeg)

### Components used in the project:
- Battery (11.1V)
- Motors (2)
- NodeMCU (ESP8266)
- Motor Driver (1)
- Bread Board (1)
- Jumper Wires (male and female)
- Body of the robot (main body, tires...)

## Steps to be followed:
- **Step 1-** Check whether the motor driver is giving the required output (around 9V).
    - powering Arduino Uno and Motor Driver seperately..
         
         <img src="https://user-images.githubusercontent.com/88929699/152638263-dbc264ff-6160-4b4b-9b71-c95bbe44cc92.png" width="300" height="300">
         
         If you want to learn other ways to power Arduino Uno and Motor Driver, [here](https://create.arduino.cc/projecthub/ryanchan/how-to-use-the-l298n-motor-driver-b124c5) is a very good explanation.

- **Step 2-** Make an app for ON / OFF of built in LED of NodeMCU, if you don't know Android Development make the app from [MIT app inventor](https://appinventor.mit.edu/).
- **Step 3-** Now connect NodeMCU to your PC and check if it is working fine, by adding the required code in it, and use the application from step 2. If the built in LED swithes ON/ OFF when you give the command through app, then your Wifi Module is working perfectly. 
- **Step 4-** Once both the devices works perfectly, start with the interfacing of Arduino Uno and NodeMCU through I2C protocol with NodeMCU as the master and Arduino Uno as a slave.
 - <img src="https://user-images.githubusercontent.com/88929699/152641315-7c92f00d-4b15-43a6-8064-996bff83658d.jpeg" width="300" height="300">
After uploading the respective codes into the Arduino Uno and NodeMCU, use the same app from step 2 and ON/ OFF the built in LED of Arduino Uno.

         
