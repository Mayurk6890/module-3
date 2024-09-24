//5.WAP to take two Array input from user and sort them in ascending or
//  descending order as per user?s choice ?


#include <stdio.h>
int main()
{
    int n1, n2, choice,i,j;
    printf("Enter size of first array = ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d numbers =\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array = ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d numbers =\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Enter your choice (1 for ascending, 2 for descending) = ");
    scanf("%d", &choice);

    // Sort first array
    if (choice == 1) {
        for (i = 0; i < n1 - 1; i++) {
            for ( j = i + 1; j < n1; j++) {
                if (arr1[i] > arr1[j]) {
                    int temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
    } else if (choice == 2) {
        for (i = 0; i < n1 - 1; i++) {
            for (j = i + 1; j < n1; j++) {
                if (arr1[i] < arr1[j]) {
                    int temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                 }
             }
        }
    }

    // Sort second array
    if (choice == 1) {
        for (i = 0; i < n2 - 1; i++) {
            for (j = i + 1; j < n2; j++) {
                if (arr2[i] > arr2[j]) {
                    int temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
    } else if (choice == 2) {
        for (i = 0; i < n2 - 1; i++) {
            for ( j = i + 1; j < n2; j++) {
                if (arr2[i] < arr2[j]) {
                    int temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
    }

    printf("Sorted first array = ");
    for ( i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    printf("Sorted second array = ");
    for ( i = 0; i < n2; i++)
        printf("%d ", arr2[i]);
    printf("\n");
getch();

    return 0;
}

