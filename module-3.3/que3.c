//WAP to find reverse of string using recursion 
#include<stdio.h>
#include<string.h>
void reversestring(char string[], int start, int end) 
{
  if (start < end) 
  {
    char temp = string[start];
    string[start] = string[end];
    string[end] = temp;
    reversestring(string, start + 1, end - 1);
  }
}
int main() 
{
  char str[] = "Hello, World!";
  int length = strlen(str);

  reversestring(str, 0, length - 1);

  printf("The reversed string is: %s\n", string);

  return 0;
}
