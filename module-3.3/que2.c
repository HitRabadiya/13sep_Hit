// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include <stdio.h>
void main() 
{
  char operator;
  int n1, n2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);
  printf("Enter two numbers: ");
  scanf("%d %d", &n1 , &n2);

  switch (op) {
    case '+':
      printf("%d + %d = %d", n1, n2, n1 + n2);
      break;
    case '-':
      printf("%d - %d = %d", n1, n2, n1 - n2);
      break;
    case '*':
      printf("%d * %d = %d", n1, n2, n1 * n2);
      break;
    case '/':
      printf("%d / %d = %d", n1, n2, n1 / n2);
      break;
    case '%':
      printf("%d % %d = %d", n1, n2 , n1 % n2);
    default:
      printf("Invalid Operator.");
  }

}
