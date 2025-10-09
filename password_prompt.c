//coding assignment 
//Willis otieno ooko
//PA106/G/28802/25
/* A PROGRAMME FOR A COMPUTER SYSTEM RUNNING ON
DO WHILE LOOP THAT PROMPTUSER TO ENTER PASSWORD 
"1234" TO LOG IN AND DISPLAYS ACCESS GRANTED 
WHEN THE PASSWORD IS CORRECT OTHERWISE DENIED*/
#include <stdio.h>
int main()
{
	int password; 
	do
	{
		printf("enter password: ");
		scanf("%d",&password);
		if(password !=1234)
		{
		printf("access denied\n");
		}
	}while(password !=1234);
	printf("access granted");
	return 0;
}