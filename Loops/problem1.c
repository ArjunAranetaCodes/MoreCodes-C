//Problem 1: Write a program that prints the numbers from 1 to 50.
//Output "Fizz" for multiples of 3, output "Buzz" for multiples of 5, and
//both "FizzBuzz" for multiples of both 3 and 5.
#include <stdio.h>

int main(){
 int x = 0;
 for(x = 1; x <= 50; x++){
  if((x % 3 == 0) && (x % 5 == 0)){
   printf("FizzBuzz\n");
  }else if(x % 3 == 0){
   printf("Fizz\n");
  }else if(x % 5 == 0){
   printf("Buzz\n");
  }else{
   printf("%d\n", x);
  }
 }

 return 0;
}
