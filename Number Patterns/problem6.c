/*
Problem 6: Write a program to print the number pattern of ones and zeros using loop.
11111
10001
10001
10001
11111
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	for(y = 0; y < 5; y++){
		for(x = 0; x < 5; x++){
			if((y == 0) || (y == 4) || (x == 0) || (x == 4)){
				printf("1");
			}else{
				printf("0");
			}			
		}
		printf("\n");
	}
	
	return 0;
}
