//Problem 4: Write a program that outputs an asterisk
//pyramid.
#include <stdio.h>

int main(){
 int x = 0;
 int y = 0;
 for(y = 0; y <= 5; y++){
  for(x = 0; x <= y; x++){
   printf("*");
  }
  printf("\n");
 }

 return 0;
}
