//Problem 18: (Recursion) Write a program that outputs the
//fibonacci sequence of a number.
#include <stdio.h>

int main(){
 int x = 0;
 for (x = 0; x <= 11; x++){
  printf("%d\n", Fibonacci(x));
 }
 return 0;
}

int Fibonacci(int num){
 if ((num == 1) || (num == 0)){
  return num;
 }else{
  return Fibonacci(num - 1) + Fibonacci(num - 2);
 }
}
