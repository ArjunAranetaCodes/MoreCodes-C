/*
Problem 14: Write a program to print the number pattern using loop.
1
22
333
4444
55555
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int row = 5;
	for(y = 0; y <= row; y++){
		for(x = 0; x < y; x++){
			printf("%d", y);
		}
		printf("\n");
	}
	
	return 0;
}
