//Problem 12: Calculate the Product of two numbers
//WITHOUT using the * operator.
#include <stdio.h>

int main(){
 int num1 = 3;
 int num2 = 5;
 int prod = 0;
 int x = 0;

 for (x = 1; x <= num2; x++){
  prod = prod + num1;
 }

 printf("3 * 5 = %d", prod);

return 0;
}
