// How many Even numbers are there
#include<stdio.h>
void main()
{
    int i,x;

    printf("Print even numbers : ");
    scanf("%d", &x);

    for(i=1; i<=x; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
}