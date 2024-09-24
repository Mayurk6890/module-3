// 5. WAP to print factorial of given number ?

#include<stdio.h>
int main()
{
	int num, i,fact = 1;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("\nEnter the factorial of %d is %d.",num,fact);
	return 0;
}
