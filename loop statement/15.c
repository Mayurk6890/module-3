// 15. calculate sum of 10 numbers using of while loop ?


#include<stdio.h>
int main()
{
	int sum=0,i,num;

	while(i<=10)
	{
		printf("\nEnter the num:");
		scanf("%d",&num);
		sum += num;
		i++;
	}
	printf("\nThe numbers :%d",sum);
}
