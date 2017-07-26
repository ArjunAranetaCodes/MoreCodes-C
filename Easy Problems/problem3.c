//Problem 3: Write a program that accepts length and
//width of rectangle to find area.
#include <stdio.h>

int main(){
 int length = 0;
 int width = 0;
 int area = 0;

 printf("Enter length value: ");
 scanf("%d", &length);
 printf("Enter width value: ");
 scanf("%d", &width);
 area = length * width;

 printf("Area of rectangle is %d\n", area);

 return 0;
}
