//Problem 9: Write a program that converys a hexadecimal number to decimal number.
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
 int dec = 0;
 char hex[10] = "100";
 char tempWord[10];
 int i, j, len;

 len = strlen(hex);
 j = 0;

 for(i=len-1; i>=0; i--){
  tempWord[j] = hex[i];
  j++;
 }
 tempWord[j] = '\0';

 for(i=0; i<len; i++){
  if(tempWord[i] == '1'){
  	dec = dec + pow(16, i);
  }
  j++;
 }
 
 printf("%d", dec);

 return 0;
}
