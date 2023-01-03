# WaterBottle Vending Machine FSM in C

## Introduction
This is a simple vending machine controller modelled by FSM in C. 

## FSM

> This is the State Diagram
![image](images/1.png)

> This is the State Transition Table
![image](images/2.png)

The vending machine sells the bottle of water for 75¢ each. The customer can only enter $1, $0.50 and $0.25. The money receiver will indicate whether a dollar or coins(25¢,50¢) is received. The money receiver will reject the money if the customer enters money other than $1, $0.50 and $0.25.When the customer pays with quarters, the machine needs to keep track of how many quarters have been received. If a sufficient(exact) amount of money is entered, the vending machine will dispense one bottle. In another case, if a dollar is entered instead, the machine will dispense a bottle of water and dispense 25¢ as change. The machine will go back to its initial state (Wait) and the vending machine will be ready to be used again.


> This is the K-Map
![image](images/4.png)
![image](images/3.jpg)


