//coding assignment 
//Willis otieno ooko
//PA106/G/28802/25
/* A Program to automatically declare whether room is vacant or
 occupied 10rooms in 5 floors*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 

int main() {
    int occupancy[5][10];
    srand(time(0));

    for (int f = 0; f < 5; f++) {
        printf("floor %d\n",f+1);
        for (int r = 0; r < 10; r++) {
        printf("     room%-3d:",r+1);
            if (occupancy[f][r]=rand()%2){
             printf("occupied\n");}
            else{
             printf("vacant\n");}
        }
        }

    return 0;
}