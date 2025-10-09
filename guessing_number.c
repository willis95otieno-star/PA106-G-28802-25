//SE CODING 
//WILLIS OTIENO OOKO
//PA106/G/28808/25
/* A PROGRAM WHICH PROMPT USER TO GUESS A NUMBER AND 
SELECTS A NUMBER AT RANDOM FROM 0-20 AS THE CORRECT
NUMBER*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretnumber,guessednumber,attempts=0;

    srand(time(0));
    secretnumber = (rand() % 20) + 1;

    while (1) 
    {
        printf("guess a number from (1-20):\n");
        scanf("%d",&guessednumber);
        attempts++;

        if (guessednumber > secretnumber) 
        {
            printf("too high!\n");
        } 
        else if (guessednumber < secretnumber) 
        {
            printf("too low!\n");
        } 
        else 
        {
            printf("Congratulations! you have won\n");
            printf("your total attempts is: %d",attempts);
            break;
        }
        
    }
    return 0;
}
