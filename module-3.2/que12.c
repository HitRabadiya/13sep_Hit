#include <stdio.h>
void main()
{
    int number;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d",&number);

    int i,firstterm=0, secondterm=1;

    printf("Fibonacci series up to %d terms:\n", number);
    for (i=1 ;i<=number ;i++) 
    {
        printf("%d ", firstterm);

        int nextterm=firstterm+secondterm;

        firstterm=secondterm;
        secondterm=nextterm;
    }
}