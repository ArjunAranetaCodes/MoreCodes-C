/*
Problem 10: Write a program to print the number pattern using loop.
12345
23456
34567
45678
56789
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int row = 5;
	int col = 5;
	int min = 1;
	for(y = 0; y < row; y++){
		int num = min + y;
		for(x = 0; x < col; x++){
			printf("%d", num);
			num = num + 1;
		}
		printf("\n");
	}
	
	return 0;
}
