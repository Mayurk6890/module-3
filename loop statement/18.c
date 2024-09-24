/*18. Write a C program to print the Multiplication Table of N.
       e.g. i. 5*1=5
	ii. 5*2=10
		1. .
		2. .
	iii. 5*10 = 50
*/	
		
	
#include<stdio.h>
int main()
{
	int num,i,num1;
	printf("Enter the value to get its table:");
	scanf("%d",&num);
	
	printf("The multiplication table of num is:\n ");
	i=1;
	while(i<=10)
	{
		num1 = i * num;
		printf("\n%d * %d = %d",num,i,num1);
		i++;
	}
	return 0;
}
