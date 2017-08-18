
#include <stdio.h>
int main(){
 int arrNumbers[4] = {4,1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;
 int closest = 0;
 int numDiff = arrNumbers[0];

 for(x = 0; x < size; x++){
  int diff = 0 - arrNumbers[x];
  diff = abs(diff);
  if (diff < numDiff){
   numDiff = diff;
   closest = arrNumbers[x];
  }
 }

 printf("Closest to 0 is %d", closest);

 return 0;
}

