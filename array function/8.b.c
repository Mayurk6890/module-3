// 8.Write a program of structure employee that provides the following
//    b. Write a program of structure for five employee that provides the following 
//       information -print and display empno, empname, address andage ?


#include <stdio.h>
struct Employee 
{
    int empNo,age;
    char empName[100],address[100];
};

int main() 
{
    struct Employee employees[5];
int i;
    printf("Enter info of 5 employee\n");
    for (i = 0; i < 5; i++) 
	{
        printf("\nEnter Employee %d Information =\n", i + 1);
        printf("Enter Employee Number = ");
        scanf("%d", &employees[i].empNo);
        printf("Enter Employee Name = ");
        scanf("%s", employees[i].empName);
        printf("Enter Employee Address = ");
        scanf("%s", employees[i].address);
        printf("Enter Employee Age = ");
        scanf("%d", &employees[i].age);
    }

    printf("\nEmployee Information =\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d =\n", i + 1);
        printf("Employee Number = %d\n", employees[i].empNo);
        printf("Employee Name = %s\n", employees[i].empName);
        printf("Employee Address = %s\n", employees[i].address);
        printf("Employee Age = %d\n\n", employees[i].age);
    }
   getch();
}

