// 4. wap to make simple calculation (operation include addition,subtraction ,multiplication,division,modulo)
//    using conditional statement ?



#include <stdio.h>

int main() {
    int num1, num2;
    char operation;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operation);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (operation == '+') {
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    } 
	else if (operation == '-') {
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    } 
	else 
	if (operation == '*') {
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    } 
	else 
	if (operation == '/') {
        if (num2 != 0) {
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        } else {
            printf("Error: Division by zero!\n");
        }
    } 
	else 
	if (operation == '%') {
        if (num2 != 0) {
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        } else {
            printf("Error: Division by zero!\n");
        }
    } else {
        printf("Error: Invalid operator!\n");
    }

    return 0;
}
