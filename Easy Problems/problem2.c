//Problem 2: Write a program that accepts two numbers
//and perform all arithmetic operations.
#include <stdio.h>

int main(){
 int num1 = 0;
 int num2 = 0;
 int sum = 0;
 int diff = 0;
 int prod = 0;
 int quot = 0;

 printf("Enter num1 value: ");
 scanf("%d", &num1);
 printf("Enter num2 value: ");
 scanf("%d", &num2);
 sum = num1 + num2;
 diff = num1 - num2;
 prod = num1 * num2;
 quot = num1 / num2;

 printf("Sum is %d\n", sum);
 printf("Difference is %d\n", diff);
 printf("Product is %d\n", prod);
 printf("Quotient is %d\n", quot);

 return 0;
}
