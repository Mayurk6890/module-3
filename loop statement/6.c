// 6. WAP to print Fibonacci series up to given numbers ?


#include <stdio.h>

int main() 
{
    int n, a=0,b=1,next;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Fibonacci series up to %d:\n", n);

    while(a<=n) 
	{
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

