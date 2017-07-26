//Problem 15: Write a program that finds if a string is
//within a string.
#include <stdio.h>
#include <string.h>

int main(){
 const char word1[12] = "programming";
 const char word2[8] = "program";
 char *ret;

 ret = strstr(word1, word2);

 if(ret != NULL){
  printf("found");
 }else{
  printf("not found");
 }

 return(0);

}
