//Problem 9: Write a program to display the multiplication
//table of a given integer.
#include <stdio.h>

int main(){
 int x = 0;
 int num = 2;
 for(x = 0; x <= 10; x++){
  printf("%d x %d = %d\n", num, x, (num * x));
 }

 return 0;
}
