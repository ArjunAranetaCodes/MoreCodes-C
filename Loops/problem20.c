//Problem 20: (Recursion) Write a program that outputs the
//sum of numbers from 1 to n.
#include <stdio.h>

int main(){
 printf("Sum is %d", GetSum(10, 0));
 return 0;
}

int GetSum(int num, int sum){
 if (num == 0){
  return sum;
 }else{
  return GetSum((num - 1), (sum + num));
 }
}
