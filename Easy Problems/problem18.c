//Problem 18: Write a program that outputs the frequency of a
//letter in a string.
#include <stdio.h>
#include <string.h>

int main(){
 const char word[8] = "program";
 const char letter = 'a';
 char *ret;
 int x = 0;
 int letterCount = 0;

 for(x = 0; word[x] != '\0'; x++){
  if(word[x] == letter){
   letterCount = letterCount + 1;
  }
 }

 printf("Total: %d", letterCount);

 return(0);
}
