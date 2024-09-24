// 8. Write a program to find out the max from given number.(e.g: no:-1562, max number is 6) ?


#include <stdio.h>
int main() 
{
    int num, maxDigit = -1;

    printf("Enter a number: ");
    scanf("%d",&num);

    while (num != 0) 
	{
        int digit = num % 10;
        if (digit > maxDigit) 
		{
            maxDigit = digit;
        }
        num /= 10;
    }

    printf("The maximum digit is: %d\n", maxDigit);

    return 0;
}


