#include<stdio.h>
void main()
{
    int a;

    printf("enter a number: ");
    scanf("%d",&a);

    while(a!=0)
    {
        printf("%d",a%10);
        a=a/10;
    }
}