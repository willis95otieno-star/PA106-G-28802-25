//NAME: WILLIS OTIENO
//ADM NO:PA106/G/28802/25
/*a programme that check if student is eligible for final exams*/

#include <stdio.h>

int main()
{
	int attendance;
	int avarage_marks;
	
	printf("enter attendance: ");
	scanf("%d",&attendance);
	printf("\nenter avarage marks: ");
	scanf("%d",&avarage_marks);
	
	if(attendance>74&&avarage_marks>39)
	{
		printf("\nyou are eligible to take exams");
	}
	else
	{
		printf("\nnot eligble");
	}
	return 0;
}