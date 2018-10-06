/*
Problem 4: Write a program to print the number pattern of ones and zeros using loop.
10001
10001
10001
10001
10001
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	for(y = 0; y < 5; y++){
		for(x = 0; x < 5; x++){
			if((x == 0) || (x == 4)){
				printf("1");
			}else{
				printf("0");
			}			
		}
		printf("\n");
	}
	
	return 0;
}
