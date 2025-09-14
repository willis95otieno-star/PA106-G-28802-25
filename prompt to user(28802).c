//group B CODING ASSIGNMENT
//NAME:WILLIS OTIENO
//ADM NO.PA106/G/28802/25
/*A PROGRAMME PROMPTING USER TO ENTER 
1)HIS/HER HEIGHT
2)HIS/HER ID NUMBER
3)HIS/HER BANK ACCOUNT BALANCE*/
#include <stdio.h>

int main()
{
  int Height;
  int ID_number;
  int Bank_account_balance;

	printf("1.enter your Height: \n");
	scanf("%d",&Height);
	printf("2.enter your ID number: \n");
	scanf("%d",&ID_number);
	printf("3.enter your Bank account balance: \n");
	scanf("%d",&Bank_account_balance);
	
	printf("The user of:");
	
	printf("height:%d\n",Height);
	printf("ID number:%d\n",ID_number);
	
	printf("is recognized by the system\n");
	
	printf("your account balance is:%d",Bank_account_balance);
	
	return 0;
}