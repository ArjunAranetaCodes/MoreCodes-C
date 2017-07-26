//Problem 9: Write a program that accepts a number
//and outputs 1 to the input (1 to n).
#include <stdio.h>

int main(){
 int num = 0;
 int sum = 0;
 int x = 0;

 printf("Enter value of num: ");
 scanf("%d", &num);

for(x = 1; x <= num; x++){
  sum = sum + x;
 }

 printf("The sum of 1 to %d is %d\n", num, sum);
 return 0;
}
