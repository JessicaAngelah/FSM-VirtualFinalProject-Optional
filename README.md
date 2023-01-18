# Alarm Clock FSM in C

## Introduction
This is a simple Alarm Clock modelled by FSM in C.

> The alarm clock has three states: Idle, Ring and snooze. The alarm clock transitions between the three states based on the input it receives. For example, if the alarm clock is in idle, and receives the input "alarm", it will transition to "ring" state.

## FSM
![image](images/1.png)
>In this FSM, The Alarm clock starts in the "IDLE" state, where there is no alarm/ the alarm is off. Then, it can transition to "Alarm" state where the alarm is on, which will be ringing. It can transition back to "IDLE" state or "snooze" state which will make the alarm snooze and will go back to "alarm" state after a period of time.

## State Transition Table
![image](images/2.png)


## K-map with combinatorial boolean equations
![image](images/3.png)

## Testing
![image](images/4.png)
![image](images/5.png)
![image](images/6.png)