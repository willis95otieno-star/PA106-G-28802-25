//group B CODING ASSIGNMENT
//NAME:WILLIS OTIENO
//ADM NO.PA106/G/28802/25
/*A C FUNCTION THAT TAKES NUMBER OF UNITS CONSUMED AS 
INPUTS AND RETURNS TOTAL BILL(tb) CONSUMED DEPENDING ON 
THE RATES BELOW  
For the first 100 units → KSh. 10 per unit
For the next 100 units → KSh. 15 per unit
Above 200 units → KSh. 20 per*/
#include <stdio.h>


  float calculateelectricitybill(float units)
  {
    float tb;
    
	if(units<=100)
	tb=units*10;
    else if(units<=200)
	tb=100*10+(units-100)*15;
    else
    tb=100*10+100*15+(units-200)*20;
    
    return tb;
  }
  
   int main()
    {
    float units;
    printf("enter units consumed: ");
    scanf("%f",&units);
    printf("total bill= ksh%.2f",calculateelectricitybill(units));
    }
	