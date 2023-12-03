#include<stdio.h>
int main()
{
    int number1, number2;
    char op;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);

    switch (op) 
    {
        case '+':
            printf("%d + %d = %d\n", number1, number2, number1 + number2);
            break;
        case '-':
            printf("%d - %d = %d\n", number1, number2, number1 - number2);
            break;
        case '*':
            printf("%d * %d = %d\n", number1, number2, number1 * number2);
            break;
        case '/':
            printf("%d / %d = %d\n", number1, number2, number1 / number2);
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    return 0;
}
