#include <stdio.h>
void main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int sum = 0;
    int a = number;

    while (number != 0)
    {
        int digit = number % 10;  
        sum = sum + digit;             
        number = number / 10;             
    }

    printf("Original number: %d\n", a);
    printf("Sum of digits: %d\n", sum);

}
