//Problem 17: Write a program that outputs the
//fibonacci sequence of a number.
#include <stdio.h>

int main(){
 int num1 = 1;
 int num2 = 1;

 printf("%d\n", num1);
 while (num2 < 100){
  printf("%d\n",num2);
  num2 = num2 + num1;
  num1 = num2 - num1;
 }
 return 0;
}
