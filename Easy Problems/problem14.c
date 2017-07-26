//Problem 14: Write a program that replaces all letter
//a' in a string with letter 'e'
#include<stdio.h>

int main(){
 char word[20] = "program";
 int counter = 0;

 while(word[counter] != '\0') {
  if(word[counter] == 'a'){
   word[counter] = 'e';
  }
  counter++;
 }
 printf("%s", word);
 return 0;
}
