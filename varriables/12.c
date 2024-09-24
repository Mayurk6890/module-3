//12. Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?

#include<stdio.h>
int main()
{
	int num,sum; 
	
	printf("number of student = ");
	scanf("\n%d",&num); 
	
	sum = num * 5 ;
	 
	printf("apple are required = %d",sum);
	
	return 0;
	
	
	
}
