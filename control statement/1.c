// 1. write a programme to accept to integer and chek wheather they are equal or not ? 

#include <stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter the first integer numnber : ");
	scanf("%d",&num1);
	
	printf("\nEnter the second integer numnber : ");
	scanf("%d",&num2);
	
	if(num1==num2)
	{
		printf("\n Both are integer is equal ");
	}
	else
	{
    	printf("\n Both are integer is not equal ");
	}
	
}

