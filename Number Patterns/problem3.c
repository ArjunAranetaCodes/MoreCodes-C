/*
Problem 3: Write a program to print the number pattern of ones and zeros using loop.
01010
01010
01010
01010
01010
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	for(y = 0; y < 5; y++){
		for(x = 0; x < 5; x++){
			if(x % 2 == 0){
				printf("0");
			}else{
				printf("1");
			}			
		}
		printf("\n");
	}
	
	return 0;
}
