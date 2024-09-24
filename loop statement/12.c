//12. Program of Armstrong Number in C using For Loop & While Loop.
//    e.g.:- nnum =153,----> 1 ^3 + 5^3 + 3^3   ----->153 ?


#include<stdio.h>
#include<math.h>
int main()
{
	int num,power=0,count=0,rem;
	
	
	printf("Enter the num :");
	scanf("%d",&num);//153
	int	copy = num;
	int copy1 = num;
	
	while(num!=0)
	{
		num = num/10;
		count ++;
	}
	
	while(copy!=0)
	{
		rem = copy%10;
	
		power =  power + pow(rem,count);
		copy = copy/10;
		
	}
	if(power == copy1)
	{
		printf("It is a armstrong number %d .",copy1);
	}
	else
	{
		printf("It is not a armstrong number.",copy1);
	}
	
	
	return 0;
}
