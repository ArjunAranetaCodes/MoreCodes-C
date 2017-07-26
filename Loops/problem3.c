//Problem 3: Write a program that accepts length and
//width of rectangle to find area.
#include <stdio.h>
#include <string.h>

int main(){
 const char word[8] = "MoreCodes";
 int x = 0;
 int strCount = 0;

 for(x = 0; word[x] != '\0'; x++){
  strCount = strCount + 1;
 }

 printf("Total: %d", strCount);

 return(0);
}
