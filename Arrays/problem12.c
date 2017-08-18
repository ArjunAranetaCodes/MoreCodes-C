
#include <stdio.h>
int main(){
 int array1[3] = {1,2,3};
 int array2[3] = {1,2,3};

 if(memcmp(array1, array2, sizeof(array1))){
  printf("Not Equal");
 }else{
  printf("Equal Arrays");
 }

 return 0;
}

