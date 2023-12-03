// Write a program to find out the max number from given array using function
#include<stdio.h>
void main() 
{
  int number,i,j,arr[100];
  printf("Enter the number(1 to 100): ");
  scanf("%d", &number);

  for (i = 0; i < n; ++i) 
  {
    printf("Enter number %d : ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (i = 1; i < n; i++) 
  {
    if (arr[0] < arr[i]) 
	{
      arr[0] = arr[i];
    }
  }
  printf("Largest element = %d", arr[0]);
}
