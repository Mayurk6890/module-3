// 22. Accept 3 numbers from user using while loop and check each numbers palindrome ?


#include <stdio.h>

int is_palindrome(int n)
 {
    int reverse = 0, original = n;
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse == original;
}

int main() {
    int i = 0, num;
    while (i < 3)
	 {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        if (is_palindrome(num))
	    {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }
        i++;
    }
    return 0;
}
