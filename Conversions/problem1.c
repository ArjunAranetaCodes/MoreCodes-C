//Problem 1: Write a program that converts a number to string.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 int num = 10;
 char strnum[20];
 itoa(num,strnum,10);  
 
 printf("%s\n", strnum);

 return 0;
}
