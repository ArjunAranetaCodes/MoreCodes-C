//Problem 19: (Recursion) Write a program that outputs
//all even numbers below 20.
#include <stdio.h>

int main(){
 PrintEven(10);
 return 0;
}

int PrintEven(int num){
 if (num == 0){
  return num;
 }else{
  if (num % 2 == 0){
   printf("%d\n", num);
  }
  return PrintEven(num - 1);
 }
}
