#include <stdio.h>
int main() 
{
    char alphabet;
    printf("Enter an alphabet: ");
    scanf(" %c", &alphabet);

    switch (alphabet) 
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", alphabet);
            break;
            
        default:
            printf("%c is a consonant.\n", alphabet);
            break;
    }
    return 0;
}
