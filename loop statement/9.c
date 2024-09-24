// 9. Write a program make a summation of given number.(e.g:1523, ans: 11 ?


#include <stdio.h>
int main() 
{
    int num, sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) 
	{
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
