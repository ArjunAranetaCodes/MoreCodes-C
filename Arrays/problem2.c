
#include <stdio.h>
int main(){
 int arrNumbers[3] = {1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;
 int indexOfNum = 0;

 for(x = 0; x < size; x++){
  if(arrNumbers[x] == 2){
   indexOfNum = x;
  }
 }


printf("%d", indexOfNum);

return 0;
}

