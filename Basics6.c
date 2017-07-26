//Loop Structures
#include <stdio.h>

int main(){
 int x = 0;
 printf("For Loop\n");
 for(x = 0; x <= 10; x++){
  printf("%d",x);
 }

 x= 0;
 printf("\nWhile Loop\n");
 while(x <= 10){
  printf("%d", x);
  x++;
 }

 x= 0;
 printf("\nDo Loop\n");
 do{
  printf("%d", x);
  x++;
 }while(x <= 10);

 return 0;
}
