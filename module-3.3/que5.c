// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice 
#include <stdio.h>
#define maxsize 100   
void main()
{
    int arr[maxsize];
    int size;
    int a, b, temp;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(a=0; a<size; a++)
    {
        scanf("%d", &arr[i]);
    }
    for(a=0; a<size; a++)
    {
        for(b=a+1; b<size; b++)
        {  
            if(arr[a] > arr[b])
            {
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(a=0; a<size; a++)
    {
        printf("%d\t", arr[a]);
    }
}