
#include <stdio.h>
int main(){
 int array1[3] = {1,2,3};
 int array2[6] = {1,2,3};
 int size1 = sizeof(array1)/sizeof(int);
 int size2 = sizeof(array2)/sizeof(int);
 int x = 0;
 int y = 0;

 for(x = size1; x < (size1 + size2); x++){
  array2[x] = array1[y];
  y++;
 }

 for(x = 0; x < size2; x++){
  printf("%d", array2[x]);
 }

 return 0;
}

