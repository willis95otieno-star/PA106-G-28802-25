//group B CODING ASSIGNMENT
//NAME:WILLIS OTIENO
//ADM NO.PA106/G/28802/25
/*A C FUNCTION THAT TAKES DISTANCE COVERED AS 
INPUTS AND RETURNS TOTAL FARE(tf) CONSUMED DEPENDING ON 
THE RATE BELOW  
For ksh 50 per km*/
#include <stdio.h>

  float calculatefare(float distance)
  {
    float tf;
    
	tf=distance*50;
    return tf;
  }
  
   int main()
    {
    float distance;
    printf("enter distance covered: ");
    scanf("%f",&distance);
    printf("total fare= ksh%.2f",calculatefare(distance));
    }
	