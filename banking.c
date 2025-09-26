//NAME: WILLLIS OTIENO
//ADM NO:PA106/G/28802/25
/*A BANK PROGRAME THAT WILL DETERMINE WHETHER CUSTOMER 
HAS QUALIFIED FOR LOAN UNDER THE FOLLOWING CRITERIA;
21 YEARS AND ABOVE,ANNUAL INCOME(A_I) ABOVE AT LEAST 21000
BY ACCEPTING AGE AND INCOME AS USERFRIENDLY PROMPTS*/

#include <stdio.h>
int main()
{
    char name[10];
    int age;
    int annual_income;

	printf("enter your name: \n");
	scanf("%s",&name);
	printf("enter your age: \n");
	scanf("%d",&age);
	printf("enter your annual income: \n");
	scanf("%d",&annual_income);
	
	printf("\n-------the bank customer----------\n");
    printf("name: %s\n",name);
    printf("age: %d\n",age);
    printf("annual income: %d\n",annual_income);
    
    if(age>20 && annual_income>=21000)
	{
    printf("congratulation you've qualified for loan.Thank you.\n");
	}
    else
	{
    printf("unfortunately,we are unable to offer you loan at this time.Thank you.");
	}
   	
	return 0;
}

