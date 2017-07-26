//Problem 16: Write a program that outputs the factorial
//of a number.
#include <stdio.h>

int main(){
 int num = 5;
 int fact = 1;
 int x = 0;

 for (x = num; x >= 1; x--){
  fact = fact * x;
 }

 printf("Factorial of 5 is %d", fact);
 return 0;
}
