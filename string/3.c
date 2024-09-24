// 3.Write a program in C to print individual characters of a string in reverse order ?


#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("Enter string = ");	
	gets(str);
	strrev(str);		  
	printf("Reverse seperate character of string = ");
	for(i=0;str[i]!='\0';i++)
	{            
		printf("\n %c",str[i]);
	}

	return 0;
}
