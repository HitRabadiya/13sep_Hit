//  WAP to find factorial using recursion
#include<stdio.h>
int factorial(int);
void main()
{
    int a,f;

    printf("enter any number =");
    scanf("%d",&a);

    f =factorial(n);
    printf("factorial = %d",f);
}
int factorial(int a)
{
    if(n==0)
        return 1;
    else if(a==1)
        return 1;
    else
        return a*factorial(a-1);
}