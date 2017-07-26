//Problem 10: Write a program that accepts three numbers
//and outputs their average.
#include <stdio.h>

int main(){
 int num1 = 0;
 int num2 = 0;
 int num3 = 0;
 int ave = 0;

 printf("Enter value of num1: ");
 scanf("%d", &num1);
 printf("Enter value of num2: ");
 scanf("%d", &num2);
 printf("Enter value of num3: ");
 scanf("%d", &num3);

 ave = (num1 + num2 + num3)/3;
 printf("Average is %d", ave);

 return 0;
}
