// 14. Accept 5 numbers from user and find those numbers factorials ?

#include <stdio.h>
long factorial(int n) 
{
    long fact = 1;
    int i;
    for ( i = 1; i <= n; i++) 
	{
        fact *= i;
    }
    return fact;
}

int main() 
{
    int numbers[5],i;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nFactorials:\n");

    for ( i = 0; i < 5; i++) 
	{
        printf("%d! = %ld\n", numbers[i], factorial(numbers[i]));
    }

    return 0;
}
