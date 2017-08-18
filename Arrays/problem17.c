
#include <stdio.h>
int main(){
 int array1[4] = {1,2,3};
 int size = sizeof(array1)/sizeof(int);
 int x = 0;
 array1[size-1] = 5;

 for(x = 0; x < size; x++){
  printf("%d", array1[x]);
 }

 return 0;
}

