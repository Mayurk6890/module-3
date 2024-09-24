//16. Calculate the sum of natural numbers using the While loop ?


#include<stdio.h>
int main()
{
	int n1,n2,i,sum=0;
	printf("Enter your number:");
	scanf("%d",&n1);
	printf("Enter your number:");
	scanf("%d",&n2);
	if(n1>0 && n2>0)
	{
	i=n1;
	while(i<=n2)
	{
		printf("\n%d",i);
		sum += i;
		i++;
	}
	printf("\nThe sum of %d and %d between values is %d",n1,n2,sum);
	}
	
	else
	{
		printf("It is a negative numbers.,natural numbers can't be negative.<^-^>'");
	}
	return 0;
}
