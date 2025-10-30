//group B CODING ASSIGNMENT
//NAME:WILLIS OTIENO
//ADM NO.PA106/G/28802/25
/*A HOTEL MANAGMENT AYSTEM USING ARRAYS TO MONITOR REVENUE AND ROOM OCCUPANCY at a random
this is the all in one new improved version*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 

int main(){

int revenue[7],totalweeklyrevenue=0,avargedailyrevenue,chain[3][5][10],occupancy[5][10],sum=0;
char *days[7]={"Monday","Tuesday","wednesday","Thursday","Friday","Saturday","sunday"};
srand(time(0));

for(int i=0;i<7;i++){
printf("\nenter %s's revenue: ",days[i]);
scanf("%d",&revenue[i]);
totalweeklyrevenue=totalweeklyrevenue+revenue[i];
avargedailyrevenue=totalweeklyrevenue/7;}

printf("\n--------this week revenue-------\n");

for(int i=0;i<7;i++){
printf("%-10s:",days[i]);
printf("%d\n",revenue[i]);}

printf("\nthe total weekly revenue is: %d\n",totalweeklyrevenue);
printf("\nthe avarage avarage revenue is: %d\n",avargedailyrevenue);

    
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