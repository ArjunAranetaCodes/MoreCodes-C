//Problem 8: Write a program that converts a decimal number to hexadecimal number.
#include <stdio.h>
#include <string.h>

int main(){
 int dec = 256;
 char hex[10] = "";
 char newNum[10] = "";
 int i, j, len;
 
 while(dec > 0){  
  char strnum[20] = "";
  itoa(dec % 16,strnum,10); 
  strcat(hex, strnum);
  dec = dec / 16;
 }

 len = strlen(hex);
 j = 0;

 for(i=len-1; i>=0; i--){
  newNum[j] = hex[i];
  j++;
 }
 newNum[j] = '\0';
 
 printf("%s", newNum);

 return 0;
}
