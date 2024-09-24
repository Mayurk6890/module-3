// 2. write a c program to to read the value of an integer m and display the value of n is 1 when m is larger 0,0
//    when m is 0 and -1 when m is less then 0

#include <stdio.h>

int main() 
{
    int m, n;

    // Read the value of m from the user
    printf("Enter the value of m: ");
    scanf("%d", &m);

    // Check the value of m and assign the corresponding value to n
    if (m > 0) 
	{
        n = 1;
    } 
	else if (m == 0) 
	{
        n = 0;
    }
	 else 
    {
        n = -1;
    }

    // Display the value of n
    printf("The value of n is: %d\n", n);

    return 0;
}
