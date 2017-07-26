
#include <stdio.h>

int main(){
 float celsius = 0.0, farenheit = 0.0;

 printf("Enter the temperature (Celsius): ");
 scanf("%f", &celsius);
 farenheit =(9.0/5.0) * celsius + 32;
 printf("%.2fC equals to %.2fF\n", celsius, farenheit);

 return 0;
}

