#include <stdio.h>
void main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if (number<0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        int i,factorial=1;
        for (i=1; i<=number;i++) 
        {
            factorial=factorial*i;
        }
        printf("The factorial of %d is: %d\n", number, factorial);
    }
}
