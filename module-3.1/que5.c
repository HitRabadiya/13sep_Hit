#include<stdio.h>
void main()
{
    int y;

    printf("Enter a year: ");
    scanf("%d", &y);
    
    
(y%4==0) ? printf("%d is a leap year.\n", y) : printf("%d is not a leap year.\n", y);
}