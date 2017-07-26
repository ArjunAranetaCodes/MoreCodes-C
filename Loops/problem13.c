 //Problem 13: Write a program that reverses a string.
#include <stdio.h>
#include <string.h>

int main(){
 char word[10] = "MoreCodes";
 char newWord[10];
 int x = 0;
 int n = strlen(word);
 int y = n - 1;

 for (x = 0; x < n; x++){
  newWord[x] = word[y];
  y--;
 }

 newWord[x] = '\0';

 printf("%s", newWord);

 return(0);
}
