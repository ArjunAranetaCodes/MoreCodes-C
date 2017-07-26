//Problem 5: Write a program that accepts that accepts temperature in
//Celcius and convert it to Farenheit.
#include <stdio.h>

int main(){
 int num = 0;

 printf("Enter value of num: ");
 scanf("%d", &num);

 if(num % 2 == 0){
  printf("The number is even");
 }else{
  printf("The number is odd");
 }

 return 0;
}
