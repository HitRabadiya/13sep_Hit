#include<stdio.h>
void main()
{
    int x,y,maximum;

    printf("enter a number: ");
    scanf("%d",&x);
    printf("entere a number: ");
    scanf("%d",&y);

    maximum = x>y ? x:y;
    printf("%d is largest",maximum);
}