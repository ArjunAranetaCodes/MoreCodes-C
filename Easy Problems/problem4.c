//Problem 4:Write a program that accepts radius of a circle and
//find its diameter, circumference, and area.
#include <stdio.h>

int main(){
 int radius = 0;
 float PI = 3.14, dia = 0.0, area = 0.0, cir = 0.0;

 printf("Enter radius value: ");
 scanf("%d", &radius);

 dia = radius * radius;
 area = PI * dia;
 cir = 2 * PI * radius;

 printf("Diameter of circle is %f\n", dia);
 printf("Area of circle is %f\n", area);
 printf("Circumference of circle is %f\n", cir);

 return 0;
}
