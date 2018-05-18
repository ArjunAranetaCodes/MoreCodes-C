//Problem 14: Write a program that converts lower case to upper case characters.
#include <stdio.h>
#include <string.h>

int main(){
 char str[5] = "abc";
 char *newStr = strupr(str);
 
 printf("%s", newStr);

 return 0;
}
