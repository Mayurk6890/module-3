/* 19.4 pattern

* 
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/


#include<stdio.h>
int main()
{
	int i,j,row,k,l;
	printf("Enter the row:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ",i);
		}
	printf("\n");
	}
	for(i=row;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
