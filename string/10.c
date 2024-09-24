// 10.Write a program in C to extract a substring from a given string ?


#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int start, end,i;

    printf("Enter a string = ");
    gets(str);

    printf("Enter start position = ");
    scanf("%d", &start);
    printf("Enter end position = ");
    scanf("%d", &end);
    
    printf("Substring = ");
    for (i = start; i <= end; i++) 
	{
        printf("%c", str[i]);
    }
    
    return 0;
}

