#include <stdio.h>

int main() {
  int number1, number2;
  float answer;
  char op;

  printf("Enter the operation to be performed (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d", &number2);

  // Addition
  if (op == '+') {
    answer = number1 + number2;
    printf("Answer: %d + %d = %f\n", number1, number2, answer);
  }

  // Subtraction
  else if (op == '-') {
    answer = number1 - number2;
    printf("Answer: %d - %d = %f\n", number1, number2, answer);
  }

  // Multiplication
  else if (op == '*') {
    answer = number1 * number2;
    printf("Answer: %d * %d = %f\n", number1, number2, answer);
  }

  // Division
  else if (op == '/') {
    if (number2 == 0) {
      printf("Divisor cannot be zero. Please enter another value.\n");
      scanf("%d", &number2);
    }
    answer = number1 / number2;
    printf("Answer: %d / %d = %.2f\n", number1, number2, answer);
  }

  else {
    printf("Invalid operator. Please enter a valid operator (+, -, *, /).\n");
  }

  return 0;
}