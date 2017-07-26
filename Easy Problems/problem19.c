//Problem 19: Write a program that counts the total number
//of vowels in a string.
#include <stdio.h>
#include <string.h>

int main(){
 const char word[8] = "program";
 const char vowels[6] = "aeiou";
 char *ret;
 int x = 0, y = 0;
 int vowelCount = 0;

 for(x = 0; word[x] != '\0'; x++){
  for(y = 0; vowels[y] != '\0'; y++){
   if(word[x] == vowels[y]){
    vowelCount = vowelCount + 1;
   }
  }
 }

printf("Total: %d", vowelCount);

return(0);
}
