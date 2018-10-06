/*
Problem 11: Write a program to print the pattern of asterisks using loop.
*
**
***
****
*****
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int row = 5;
	for(y = 0; y <= row; y++){
		for(x = 0; x < y; x++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
