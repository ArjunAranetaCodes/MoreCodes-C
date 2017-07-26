//Problem 17: Write a program that outputs the index
//of the first occurrence of the letter in a string.
#include <stdio.h>
#include <string.h>

int main(){
 const char word[12] = "program";
 const char letter[2] = "a";
 char *ret;

 ret = strstr(word, letter);

 if(ret != NULL){
  printf("Contains a");
 }else{
  printf("Does not contain a");
 }

 return(0);

}
