#include <stdio.h>
int main() 
{
    
    double n1, n2;
    printf("Enter the first number: ");
    scanf("%lf", &n1);
    printf("Enter the second number: ");
    scanf("%lf", &n2);

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf("\nAfter swapping:\n");
    printf("number1 = %.2lf\n", n1);
    printf("number2 = %.2lf\n", n2);

    return 0;
}