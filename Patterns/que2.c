#include<stdio.h>
void main()
{
    int r,col,row=5;
    char c='A';

    for(r=1;r<=row;r++)
    {
        for(col=1; col<=r; col++)
        {
            printf("%3c",c); 
            c++;
        }
        printf("\n");
    }
}