// 14.Perform 2D matrix array ?


#include <stdio.h>
int main() 
{
    int matrix[100][100],i,j,n;
    
    printf("2D matrix array\n");
    printf("Enter the size of array = ");
	scanf("%d",&n);
	
    for ( i = 0; i < n; i++)
	 {
        for ( j = 0; j < n; j++)
		 {
    printf("Enter number for matrix [%d][%d] =",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix =\n");
    for ( i = 0; i < n; i++) 
	{
        for ( j = 0; j < n; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
getch();
}
