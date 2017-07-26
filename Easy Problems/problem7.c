//Problem 7: Write a program that finds the sum of all
//numbers from 1 to 20.
#include <stdio.h>

int main(){
 int sum = 0;
 int x = 0;

 for(x = 1; x <= 20; x++){
  sum = sum + x;
 }

 printf("The sum of 1 to 20 is %d\n", sum);

 return 0;
}
