//coding assignment 
//Willis otieno ooko
//PA106/G/28802/25
/* A 3d array Programm allocate room whetheriis occupied or 
vacant in the three branches*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 

int main() {
    int chain[3][5][10],occupancy[5][10],sum=0;
    srand(time(0));
    for(int b=0; b<3;b++) {
        printf("branch %d\n",b+1);
        for (int f = 0; f < 5; f++) {
            printf("    \n   floor %d\n",f+1);
            for (int r = 0; r < 10; r++) {
              printf("            room%-3d:",r+1);
            if (occupancy[f][r]=rand()%2){
             sum=sum+1;
             printf("occupied\n");}
            else{
             printf("vacant\n");}
        }
        }
        }
        printf("\ntotal number of room occupied %d \n",sum);

    return 0;
}