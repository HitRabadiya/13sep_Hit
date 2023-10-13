#include<stdio.h>
int main()
{
    int a,before,after;
    printf("Enter your current age: ");
    scanf("%d",&a);

    before=--a;
    printf("One year ago, your age : %d\n",before);

    after=++a;
    after=++a;
    printf("One year after, your age : %d\n",after);

    return 0;
}