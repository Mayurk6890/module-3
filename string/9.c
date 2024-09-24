// 9.Write a program in C to find the maximum number of characters in a string?


#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100],max;
    int maxcount = 0,i,j;
    
    printf("Enter a string = ");
    gets(str);
    
    for ( i = 0; str[i] != '\0'; i++) 
	{
        int count = 0;
        for ( j = 0; str[j] != '\0'; j++) 
		{
            if (str[i] == str[j]) 
			{
                count++;
            }
        }
        if (count > maxcount) {
            maxcount = count;
            max = str[i];
        }
    }
    printf("Character '%c' appears maximum %d times\n", max, maxcount);

    return 0;
}

