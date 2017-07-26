//Problem 12: Write a program that asks a user for their
//name and outputs a greeting with their name.
#include <stdio.h>

int main(){
 char name[20];
 char enterkey;

 printf("What is your name? ");
 scanf("%s", name);
 enterkey = getchar();
 printf("Hello %s", name);

 return 0;
}
