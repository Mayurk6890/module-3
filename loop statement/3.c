/*3. WAP to take no. Input from user find out below values.
  a. How many Even numbers are there
  b. How many odd numbers are there
  c. Sum of even numbers
  d. Sum of odd numbers.
  */ 
  
  
#include<stdio.h>
int main()
{
	int num,i,num1,sum1=0,sum2=0;
	int count1 = 0,count2 = 0;
	
	printf("Enter any the size of the number you want to print :");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		printf("\nEnter your value : ");
		scanf("%d",&num1);
		
		printf("\nthe values are %d",num1);
		if (num1 % 2 == 0)
		{
			count1++;
			sum1 = sum1 + num1;
		}
		else if(num1 % 2 != 0)
		{
			count2++;
			sum2 = sum2 + num1;
		}
		
	}
		printf("\nThe even numbers are  : %d",count1);
		printf("\nthe odd numbers are : %d",count2);
		printf("\n");
		printf("\nThe sum of even numbers are : %d", sum1);
		printf("\nThe sum of odd numbers are : %d", sum2);
	return 0;
 } 
