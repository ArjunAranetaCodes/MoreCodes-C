//Problem 7: Write a program that converts a decimal number to binary number.
#include <stdio.h>
#include <string.h>

int main(){
 int dec = 10;
 char binary[10] = "";
 char newNum[10];
 int i, j, len;
 
 while(dec > 0){  
  char strnum[20];
  itoa(dec % 2,strnum,10);  
  strcat(binary, strnum);
  dec = dec / 2;
 }

 len = strlen(binary);
 j = 0;

 for(i=len-1; i>=0; i--){
  newNum[j] = binary[i];
  j++;
 }
 newNum[j] = '\0';
 
 printf("%s", newNum);

 return 0;
}
