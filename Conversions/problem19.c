//Problem 19: Write a program that converts numbers to words.
#include <stdio.h>
#include <string.h>

char *NumberToWords(int number, char word[]) {
 if((number >= 1) && (number <= 19)){
  char *map[21] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven",
  "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
  "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
  word = map[number - 1];
  return word;
 }else if((number >= 20) && (number <= 99)){
  char *map[10] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
  word = map[number - 20];
  return word;
 }

 return word;
}

int main(){
 printf("%s", NumberToWords(20, ""));

 return 0;
}
