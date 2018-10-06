/*
Problem 7: Write a program to print the number pattern of ones and zeros using loop.
10101
01010
10101
01010
10101
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int count = 0;
	for(y = 0; y < 5; y++){
		for(x = 0; x < 5; x++){
			count += 1;
			if(count % 2 == 1){
				printf("1");
			}else{
				printf("0");
			}			
		}
		printf("\n");
	}
	
	return 0;
}
