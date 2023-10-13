#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is largest",a);
        }
    }
     if(b>c)
    {
        if(b>a)
        {
            printf("%d is largest",b);
        }
    }
     if(c>b)
    {
        if(c>a)
        {
            printf("%d is largest",c);
        }
    }
    return 0;
}