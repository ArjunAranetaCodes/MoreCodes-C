/*
Problem 17: Write a program to print the number pattern using loop.
1
12
123
1234
12345
1234
123
12
1
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int row = 5;
	for(y = 0; y <= row; y++){
		for(x = 0; x < y; x++){
			printf("%d", x + 1);
		}
		printf("\n");
	}
	
	y = 0;
	x = 0;
	for(y = row - 1; y >= 0; y--){
		for(x = 0; x < y; x++){
			printf("%d", x + 1);
		}
		printf("\n");
	}
	
	return 0;
}
