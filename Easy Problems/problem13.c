//Problem 13: Write a program that outputs the length
//of the string.
#include <stdio.h>
#include <string.h>

int main(){
 char word[9] = "MoreCodes";
 int strLength = 0;
 strLength = strlen(word);

 printf("String Length: %d", strLength);

 return 0;
}
