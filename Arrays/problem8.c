
#include <stdio.h>
int main(){
 int arrNumbers[3] = {1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;
 int min = arrNumbers[0];

 for(x = 0; x < size; x++){
  if(arrNumbers[x] < min){
   min = arrNumbers[x];
  }
 }

 printf("Lowest number: %d", min);

 return 0;
}

