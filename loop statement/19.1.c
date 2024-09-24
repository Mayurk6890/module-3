/* 19.1 patterns

      1
      1 0
      1 0 1
      1 0 1 0
      1 0 1 0 1
*/


#include<stdio.h>
int main()
{
	int row,i,j,r;
	printf("Enter the row: ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			r=j%2;
			printf("%d ",r);
		}
		printf("\n");
	}
	return 0;
}
