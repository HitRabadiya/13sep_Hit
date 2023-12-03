#include <stdio.h>
void main()
{
    float p, r, t, simpleinterest;

    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the rate of interest per year: ");
    scanf("%f", &r);

    printf("Enter the time in years: ");
    scanf("%f", &t);

    simpleinterest = p * r * t / 100.0;


    printf("\nSimple Interest: %.2f\n", simpleinterest);
}
