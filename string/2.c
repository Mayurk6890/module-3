// 2.Write a program in C to separate individual characters from a string ?


#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("Enter string = ");
	gets(str);
	
	printf("Seperate character of string = ");
	for(i=0;str[i]!='\0';i++)
	{
		printf("\n %c",str[i]);
	}
	
	return 0;
}
