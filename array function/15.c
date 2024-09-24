// 15.Store 5 numbers in array and sort it in ascending order ?


#include <stdio.h>
int main() 
{
    int num[5],i,j;
    
    printf("enter 5 numbers in ascending order =\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++) {
        for ( j = i + 1; j < 5; j++) {
            if (num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    printf("\nSorted numbers in ascending order =\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", num[i]);
    }
    getch();
}

