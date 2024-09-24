// 4. Write a program in C to count the total number of words in a string ?


#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,word=1;
	
	printf("\nEnter your sentence:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			word++;
		}
	}
	printf("\nThe total number of words are %d ",word);
	
	return 0;
}

