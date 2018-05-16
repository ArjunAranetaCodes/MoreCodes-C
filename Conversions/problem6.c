//Problem 6: Write a program that converts a binary number to decimal number.
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
 int dec = 0;
 char binary[10] = "110";
 char tempWord[10];
 int i, j, len;

 len = strlen(binary);
 j = 0;

 for(i=len-1; i>=0; i--){
  tempWord[j] = binary[i];
  j++;
 }
 tempWord[j] = '\0';

 for(i=0; i<len; i++){
  if(tempWord[i] == '1'){
  	dec = dec + pow(2, i);
  }
  j++;
 }
 
 printf("%d", dec);

 return 0;
}
