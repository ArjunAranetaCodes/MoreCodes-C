
#include <stdio.h>
int main(){
 int arrNumbers[3] = {1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);

 printf("%d\n", arrNumbers[0]);
 printf("%d\n", arrNumbers[size - 1]);

 return 0;
}

