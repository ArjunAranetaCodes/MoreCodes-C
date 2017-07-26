 //Problem 16: Write a program that compare two strings.
#include <stdio.h>
#include <string.h>

int main(){
 const char word1[5] = "More";
 const char word2[6] = "Codes";

 if (strcmp(word1,word2) == 0)
  printf("Equal");
 else
  printf("Not Equal");

 return(0);
}
