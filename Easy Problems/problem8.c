//Problem 8: Write a program that outputs all numbers divisible by
//5 from 1 to 30.
#include <stdio.h>

int main(){
 int sum = 0;
 int x =0;

 for(x = 1; x <= 30; x++){
  if(x % 5 == 0){
   sum = sum + x;
  }
 }

 printf("The sum of numbers divisible by 5 from 1 to 30 is %d\n", sum);

 return 0;
}
