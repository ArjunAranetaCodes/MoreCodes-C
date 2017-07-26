//Problem 5: Write a program that outputs all even
//numbers below 20.
#include <stdio.h>

int main(){
 int x = 0;
 for(x = 0; x <= 20; x++){
  if(x % 2 == 0){
  	printf("%d\n",x);
  }
 }

 return 0;
}
