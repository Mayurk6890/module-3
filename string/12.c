// 12.Write a program in C to find the number of times a given word 'is' appears in the given string ?


#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int count = 0,i;

    printf("Enter a string = ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == 'i' && str[i + 1] == 's' && (str[i - 1] == ' ' || i == 0) &&
		 (str[i + 2] == ' ' || str[i + 2] == '\0')) 
		{
            count++;
        }
    }
    printf("The word 'is' appears %d times\n", count);
    
    return 0;
}
