//Problem 1: Write a program that accepts
//two numbers and find the sum.
#include <stdio.h>

int main(){
 int num1 = 0;
 int num2 = 0;
 int sum = 0;

 printf("Enter num1 value: ");
 scanf("%d", &num1);
 printf("Enter num2 value: ");
 scanf("%d", &num2);
 sum = num1 + num2;


 printf("Sum is %d\n", sum);

 return 0;
}
