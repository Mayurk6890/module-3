//13. Calculate the factorial of a given numner using while loop ?

#include<stdio.h>
int main()
{
	int num, i,factorial=1;
	printf("Enter the num:");
	scanf("%d",&num);
	
	i=1;
	while(i<=num)
	{
		factorial *= i;	
		i++;
	}
	printf("The factorial of given number is %d",factorial,num);
	
	return 0;	
}
