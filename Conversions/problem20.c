//Problem 20: Write a program that converts a number to its 
//corresponding month (e.g. 1 = January).
#include <stdio.h>

int main(){
 int index = 1;
 char month[][13] = {"January", "February", "March", "April",
 "May", "June", "July", "August",
 "September", "October", "November", "December"};
 
 printf("%s", month[index - 1]);

 return 0;
}
