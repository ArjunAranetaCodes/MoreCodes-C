/*
Problem 16: Write a program to print the number pattern using loop.
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
	for(y = row; y > 0; y--){
		for(x = 0; x < y; x++){
			printf("%d", x + 1);
		}
		printf("\n");
	}
	
	return 0;
}
