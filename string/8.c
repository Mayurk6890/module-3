// 8.Write a program in C to count the total number of vowels or consonants in a string ?

		
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i,vowels = 0, con = 0;
    
    printf("Enter a string to count = ");
    gets(str);

    for ( i = 0; str[i] != '\0'; i++) 
	{
            if (str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||
                str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U') 
			{
                vowels++;
            } 
			else
			{
                con++;
            }
    }
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",con);
 
    return 0;
}

