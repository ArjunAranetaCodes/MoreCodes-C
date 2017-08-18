
#include <stdio.h>
int main(){
 int arrNumbers[3] = {1, 1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;
 int count = 0;
 for(x = 0; x < size; x++){
  if(arrNumbers[x] == 1){
  count++;
  }
 }

 printf("Occurence: %d", count);

 return 0;
}

