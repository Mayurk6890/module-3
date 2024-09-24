// 13.Write a program in C to remove characters from a string except alphabets ?


#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;

	printf("Enter your string = ");
	gets(str);
	printf("New string = ");
	for(i=0;str[i]!='\0';i++)
	{
		if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')|| (str[i]==' '))
		{
			printf("%c",str[i]);
		}
	}
	
	return 0;
}

