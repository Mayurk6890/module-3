/*7. WAP to print number in reverse order. e.g:number=64728---->reverse=----->82746.*/
//while loop


#include<stdio.h>
int main()
{
	long int i,num,rem,rev=0;
	printf("\nEnter the number = ");
	scanf("%ld",&num);
	printf("The original number = %ld",num);
	
	i=num;
	while(num!=0)
	{
		rem = num%10;
		rev = (rev*10) + rem;
		num = num/10;
	}
	
	printf("\nReverse number = %d",rev);
	
	return 0;
}
