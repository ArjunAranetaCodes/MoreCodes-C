/*
Problem 9: Write a program to print the number pattern of ones and zeros using loop.
11011
11011
00000
11011
11011
*/

#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int row = 5;
	int col = 5;
	for(y = 0; y < row; y++){
		for(x = 0; x < col; x++){
            if(col / 2 == x || row / 2 == y){
                printf("0");
            }else if((col % 2 == 0 && (col / 2) == x) || (row % 2 == 0 && (row / 2) == y)){
                printf("0");
            }else{
                printf("1");
            }		
		}
		printf("\n");
	}
	
	return 0;
}
