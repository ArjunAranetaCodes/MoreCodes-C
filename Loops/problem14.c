//Problem 14: Write a program that accepts 5 numbers
//and outputs the average.
#include <stdio.h>

int main(){
 int num = 0;
 int sum = 0;
 int ave = 0;
 int x = 0;

 for (x = 0; x <5; x++){
  printf("Enter a number: ");
  scanf("%d", &num);
  sum = sum + num;
 }

 ave = sum / 5;

 printf("Average is %d", ave);

 return 0;
}
