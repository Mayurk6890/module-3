// 8.WAP to reverse a string and check that the string is palindrome or not ?

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str2[100],camp;
	printf("Enter the string = ");
	gets(str);
	
	strcpy(str2,str);
	strrev(str);
	
	printf("\nReverse of string  = %s\n",str);
	
	camp = strcmp(str2,str);	
	if (camp == 0)
	{
		printf("\nString is a palindrome.");
	}
	else
	{
		printf("String is not palindrome.");
	}
	
    getch();
}
