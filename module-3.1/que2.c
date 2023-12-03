#include<stdio.h>
int main()
{
    int n1, n2;
    char op;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    switch (op) 
    {
        case '+':
            printf("%d + %d = %d\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%d - %d = %d\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%d * %d = %d\n", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%d / %d = %d\n", n1, n2, n1 / n2);
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    return 0;
}
