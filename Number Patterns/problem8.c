/*
Problem 8: Write a program to print the number pattern of ones and zeros using loop.
11111
11111
11011
11111
11111
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int row = 5;
	int col = 5;
	for(y = 0; y < row; y++){
		for(x = 0; x < col; x++){
			if(x == (row / 2) && y == (col / 2)){
				printf("0");
			}else{
				printf("1");
			}			
		}
		printf("\n");
	}
	
	return 0;
}
