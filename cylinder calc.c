// ASSIGNMENT TWO
//NAME: WILLIS OTIENO
// ADM NO.PA106/G/28802/25
/*A PROGRAM TO CALCULATE VOLUME AND
SURFACE AREA(SA)OF A CIRCLE TO 4sf BY PROMPTING
USER TO ENTER THE HEIGHT AND RADIUS 
OF THE CIRCLE*/

#include <stdio.h>

int main()
{
	float radius;
	float height;
	float pi=3.142;
	float SA;
    float volume;
	
	
	printf("enter radius of the cylinder: \n");
	scanf("%f",&radius);
    printf("enter height of the cylinder: \n");
 	scanf("%f",&height);
    
	SA=((2*pi*radius*radius)+(2*radius*pi*height)); 
    volume=(pi*radius*radius*height);

	printf("SA= %.4f\n",SA);
	printf("volume= %.4f",volume);
	return 0;
}
