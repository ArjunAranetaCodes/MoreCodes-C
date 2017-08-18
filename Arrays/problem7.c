
#include <stdio.h>
int main(){
 int arrNumbers[3] = {1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;
 int max = arrNumbers[0];

 for(x = 0; x < size; x++){
  if(arrNumbers[x] > max){
   max = arrNumbers[x];
  }
 }

 printf("Largest number: %d", max);

 return 0;
}

