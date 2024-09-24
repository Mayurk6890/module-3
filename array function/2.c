// 2.WAP of Addition, Subtraction, Multiplication and Division using Switch case.
//   (Must Be Menu Driven) ?


#include<stdio.h>
void add(), sub(), mul(), div();
int main()
{
	int n;
	printf("Enter your choice:");
	printf("\nPress 1 for Addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for Division = ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			add();
		break;
		case 2:
			sub();
		break;
		case 3:
			mul();
		break;
		case 4:
			div();
		break;	
	}
	getch();
}


void add()
{
	int n1, n2, add=0;
	printf("\nEnter 1 number = ");
	scanf("%d",&n1);
	printf("\nEnter 2 number = ");
	scanf("%d",&n2);
	
	add = n1 + n2;
	printf("\n Addition = %d",add);
}

void sub()
{
	int n1, n2, sub=0;
	printf("\nEnter 1 number = ");
	scanf("%d",&n1);
	printf("\nEnter 2 number = ");
	scanf("%d",&n2);
	
	sub = n1 - n2;
	printf("\n Subtraction = %d",sub);
}

void mul()
{
	int n1, n2, mul=1;
	printf("\nEnter 1 number = ");
	scanf("%d",&n1);
	printf("\nEnter 1 number = ");
	scanf("%d",&n2);
	
	mul = n1 * n2;
	printf("\n Multiplication = %d",mul);
}
void div()
{
	float n1, n2, div=0;
	printf("\nenter value for n1:");
	scanf("%f",&n1);
	printf("\nenter value for n2:");
	scanf("%f",&n2);
	
	div = n1 / n2;
	printf("\n Division = %.2f",div);
}
