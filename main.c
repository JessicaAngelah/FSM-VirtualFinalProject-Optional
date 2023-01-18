#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "mylib/mylib.h"

void idle(){
printf("_______________________\n");
printf("|  /---------------\\  |\n");
printf("| |      Alarm      | |\n");
printf("| |      IDLE       | |\n");
printf("| \\----------------/  |\n");
printf("|     O  o    o  O    |\n");
printf("|_____________________|\n");
}

void ring(){
printf("_______________________\n");
printf("|  /---------------\\  |  RING RINGGGG!!!\n");
printf("| |      Alarm      | |\n");  
printf("| |    RINGING!!!   | |           RING RINGGGG!!!\n");
printf("|  \\---------------/  |\n");
printf("|     O  o    o  O    |      RING RINGGGG!!!\n");  
printf("|_____________________|\n");
}

void snooze(){
printf("_______________________\n");
printf("|  /---------------\\  |   zzzz\n");
printf("| |      Alarm      | |\n");
printf("| |    on Snooze    | |\n"); 
printf("|  \\---------------/  |          zzzzz\n");
printf("|     O  o    o  O    |\n");
printf("|_____________________|\n");
}


int main(void){
    // Set initial state.
    int s0 = 0, s1 = 0, X = 0, Y = 0, S0 = 0, S1 = 0, A = 0, B = 0;

    // Loop.
    while(true){
        if ((S0 == 0) && (S1 == 0)){
            idle(); // The Alarm is in an idle state
            if ((X == 0) && (Y == 1)){
                snooze(); // 01 is turning the snooze on.
                S1 = 1;
            } else if ((X == 1) && (Y == 0)){
                ring(); // 10 is the alarm ringing
            }

        }
        else if((S0 == 0) && (S1 == 1)){
            snooze(); 
            if ((X == 0) && (Y == 0)){
                idle(); 
            } else if((X == 0) && (Y == 1)){
                ring(); 
                S1 = 0;
            } else if((X == 1) && (Y == 0)){
                ring(); 
                S1 = 0;
                S0 = 1;
            }
        }
        else if((S0 == 1) && (S1 == 0)){
            snooze(); 
            if ((X == 0) && (Y == 0)){
                idle();
            } else if((X == 0) && (Y == 1)){
                ring();
            } else if((X == 1) && (Y == 0)){
                snooze(); 
                S0 = 0;
                S1 = 1;
            }
        }
        
        // Get user input.
        X = 0;
        Y = 0;
        int button;
        printf("Enter a button ([0] for no alarm | [1] for alarm | [2] for snooze): ");
        scanf("%d", &button);

        if (button == 0){
            X = 0;
            Y = 0;
        } else if (button == 2){
            X = 0;
            Y = 1;
        } else if (button == 1){
            X = 1;
            Y = 0;
        } 
    }

    return 0;

}
