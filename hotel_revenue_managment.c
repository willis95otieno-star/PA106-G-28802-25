//group B CODING ASSIGNMENT
//NAME:WILLIS OTIENO
//ADM NO.PA106/G/28802/25
/*A HOTEL MANAGMENT AYSTEM USING ARRAYS TO MONITOR REVENUE AND ROOM OCCUPANCY*/

#include<stdio.h>

int main(){

int revenue[7],totalweeklyrevenue=0,avargedailyrevenue,occupancy[5][10],f,j;
char *days[7]={"Monday","Tuesday","wednesday","Thursday","Friday","Saturday","sunday"};

for(int i=0;i<7;i++){
printf("\nenter ");printf("%s",days[i]);printf(" revenue: ");
scanf("%d",&revenue[i]);
totalweeklyrevenue=totalweeklyrevenue+revenue[i];
avargedailyrevenue=totalweeklyrevenue/7;}

printf("\n--------this week revenue-------\n");

for(int i=0;i<7;i++){
printf("%-10s:",days[i]);
printf("%d\n",revenue[i]);}

printf("the total weekly revenue is: %d\n",totalweeklyrevenue);
printf("the avarage avarage revenue is: %d\n",avargedailyrevenue);

}