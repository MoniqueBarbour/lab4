#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int sub(int a, int b);
int divide(int a, int b);
int mult( int a, int b);
int exit(int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int number1 = 8;
  int number2 = 7;
  int (*funcptrarr[5])(int, int) = {add, sub, divide, mult, exit};
  int operands;
  
  printf("Operand 'a' = 8 | Operand 'b' = 7\nEnter a '0','1','2', or '3'\n'0' - Addition\n'1' - Subtraction\n'2' - Division\n'3' - Multiplication\n'4' - Exit\n");
  scanf("%d", &op);
  printf("%d\n",funcptrarr[operands](number1, number2));
  
	return 0;
}

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add(int a, int b) { 
  printf ("Adding 'a' & 'b'\n"); 
  return a + b; 
}

int sub(int a, int b) {
  printf ("Subtracting 'a' & 'b'\n"); 
  return a - b;
}

int divide(int a, int b) {
  printf ("Dividing 'a' & 'b'\n"); 
  return a / b;
}

int mult(int a, int b) {
  printf ("Multiplying 'a' and 'b'\n"); 
  return a * b;
}

int exit(int a, int b){
  return 0;
}
