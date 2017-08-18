
#include <stdio.h>
int main(){
 int array1[] = {1,2,3};
 int array2[3];
 int size = sizeof(array1)/sizeof(int);
 int x = 0;

 memcpy(array2, array1, sizeof(array1));

 for(x = 0; x < size; x++){
  printf("%d", array2[x]);
 }

 return 0;
}

