// 26. (1) + (1+2) + (1+2+3) + (1+2+3+4) +...+(1+2+3+4+...+n) ?


#include<stdio.h>
int main()
{
	int i,n,sum=0,j,k=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		k=i+k;//0+1
		printf("(%d)",k);//(1)
		sum += k;//0+1
		k++;//k=2
	}
	printf("\nsum of numbers are %d.",sum);
	return 0;
}
	
