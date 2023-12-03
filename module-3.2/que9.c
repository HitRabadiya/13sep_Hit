//Sum of even numbers 
#include<stdio.h>
void main()
{
    int i,a,sum=0;

    printf("Enter numbers : ");
    scanf("%d",&a);

    for(i=2;i<=a;i=i+2)
    {
        sum=sum+i;
    }

    printf("Sum of even number = %d",sum);
}