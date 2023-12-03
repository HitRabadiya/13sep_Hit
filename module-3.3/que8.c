// WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>
void main()
{
    char string[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", string);

    len = strlen(string);

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }

    printf("Reversed string: %s\n", string);

    if (strcmp(string, string) == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
}