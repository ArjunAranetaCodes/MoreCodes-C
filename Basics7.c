//If, ElseIf, and Else Structure
#include <stdio.h>

int main(){
 int num1 = 1, num2 = 2;

 //if statement
 if(num1 > num2){
  printf("First number is higher!\n");
 }

 //if-else statement
 if(num1 == num2){
  printf("They are equal!\n");
 }else{
  printf("They are not equal!\n");
 }

 //if-else if statement
 if(num1 > num2){
  printf("First number is greater!\n");
 }else if(num1 < num2){
  printf("Second number is greater!\n");
 }

 return 0;
}
