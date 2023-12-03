#include <stdio.h>
void main()
{
    int choice,d,y;

    printf("Choose conversion from 1 & 2:\n");
    printf("1. Years to Days\n");
    printf("2. Days to Years\n");
    printf("Enter your choice from 1 or 2: ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            printf("Enter the number of years: ");
            scanf("%d", &y);

            d = y*365;
            printf("%d years is approximately %d days.\n",y,d);
            break;

        case 2:
            printf("Enter the number of days: ");
            scanf("%d", &d);

            y = d/365;
            printf("%d days is approximately %d years.\n",d,y);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
