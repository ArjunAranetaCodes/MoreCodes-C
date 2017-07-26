//Problem 20: Write a program that checks if a string is a
//palindrome.
#include <stdio.h>
#include <string.h>

int main(){
 char word[10] = "anna";
 char tempWord[10];
 int i, j, len;

 len = strlen(word);
 j = 0;

 for(i=len-1; i>=0; i--){
  tempWord[j] = word[i];
  j++;
 }
 tempWord[j] = '\0';

 if(strcmp(word, tempWord) == 0){
  printf("Palindrome");
 }else{
  printf("Not Palindrome");
 }

 return 0;
}
