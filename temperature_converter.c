//group B CODING ASSIGNMENT
//NAME:WILLIS OTIENO
//ADM NO.PA106/G/28802/25
/*A C FUNCTION THAT TAKES TEMPERATURE IN FAHRENHEIT(F) AS 
INPUTS AND RETURNS TEMPERATURE IN DEGREE CELCIUS(C) USING 
THE FORMULA C=(F-32)*5/9*/
#include <stdio.h>

  int converttocelcius(float F)
  {
    int C;
    
	C=(F-32)*5/9;
    return C;
  }
  
   int main()
    {
    float F;
    printf("temperature in Fahrenheit: ");
    scanf("%f",&F);
    printf("degree celcius equivalent: %d°C",converttocelcius(F));
    }
	