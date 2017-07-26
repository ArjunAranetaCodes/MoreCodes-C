//Problem 15: Write a program that will ask the user to
//input n positive numbers. The program will terminate
//if one of those number is not positive.
#include <stdio.h>

int main(){
 int num = 0;
 while(num > -1){
  printf("Enter a number: ");
  scanf("%d", &num)	;
 }

 printf("Terminated");
 return 0;
}
