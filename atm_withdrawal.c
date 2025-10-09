//group B CODING ASSIGNMENT
//NAME:WILLIS OTIENO
//ADM NO.PA106/G/28802/25
/*A PROGRAMME THAT RUNS ON WHILE LOOP OF AN ATM
THAT ALLOWS WITHDRAWAL AS LONG AS THE BALANCE
 IS GREATER THAN ZERO AND DISPLAYS THE NEW BALANCE
 AFTER WITHDRAWAL*/
#include <stdio.h>

int main()
{
  float amount=1000000,x,bank_balance;
  printf("your current bank balance is %.2f\n", amount);
  while(amount>0)
  {
	printf("enter amount to withdraw: ");
	scanf("%f",&bank_balance);
	amount=amount-bank_balance;
	printf("\nyour new bank balance is %.2f\n", amount);
	}
	return 0;
}