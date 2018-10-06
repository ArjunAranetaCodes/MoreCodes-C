/*
Problem 19: Write a program to print the number pattern using loop.
11 11
11 11
   
11 11
11 11
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
                printf(" ");
            }else if((col % 2 == 0 && (col / 2) == x) || (row % 2 == 0 && (row / 2) == y)){
                printf(" ");
            }else{
                printf("1");
            }		
		}
		printf("\n");
	}
	
	return 0;
}
