// 7.Write a program in C to copy one string to another string ?


#include <stdio.h>
#include <string.h>
int main() {
    char str1[100],str2[100];
    int i = 0;

    printf("Enter a string  = ");
    gets(str1);
    
    strcpy(str2,str1);
    printf("Copied string = %s\n", str2);
    
    return 0;
}

