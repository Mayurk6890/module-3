// 17. Calculate 5 numbers from user and calculate number of even and odd using
//    of while loop ?


#include<stdio.h>
int main()
{
	int num,i,count1=0,count2=0;
	
	i=1;
	while(i<=5)
	{
		printf("\nEnter the number:");
		scanf("%d",&num);
		printf("%d",num);
		if(num % 2 == 0)
		{
			count1++;
		}
		else
		{
			count2++;
		}
		i++;
	}
	printf("\nThe even numbers are : %d",count1);
	printf("\nThe odd nnumbers are : %d",count2);
	
	return 0;
}
