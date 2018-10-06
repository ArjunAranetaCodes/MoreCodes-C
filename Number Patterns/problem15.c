/*
Problem 15: Write a program to print the number pattern using loop.
11111
2222
333
44
5
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int row = 5;
	int num = 1;
	for(y = row; y > 0; y--){
		for(x = 0; x < y; x++){
			printf("%d", num);
		}
		num = num + 1;
		printf("\n");
	}
	
	return 0;
}
