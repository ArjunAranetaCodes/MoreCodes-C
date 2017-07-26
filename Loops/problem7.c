//Problem 7: Write a program that outputs the sum of
//numbers from 1 to n.
#include <stdio.h>

int main(){
 int n = 10;
 int x = 0;
 int sum = 0;
 for(x = 1; x <= n; x++){
  sum = sum + x;
 }

 printf("Sum is %d", sum);
 return 0;
}
