//Problem 11: Write a program that concatenates
//two words.
#include <stdio.h>
#include <string.h>

int main(){
 char word1[5] = "More";
 char word2[6] = "Codes";
 strcat(word1, word2);

 printf("%s", word1);
}
