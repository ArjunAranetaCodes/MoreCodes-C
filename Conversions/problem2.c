//Problem 2: Write a program that converts a string to integer.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 int num = 0;
 char strnum[20] = "10";
 num = atoi(strnum);  
 
 printf("%d\n", num);

 return 0;
}
