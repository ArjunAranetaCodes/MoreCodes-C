/*
Problem 18: Write a program to print the number pattern using loop.
  1  
 111
11111
 111
  1
*/

#include<stdio.h>

int main(){
 	int y = 0;
	int x = 0;
	int rows = 3;
    int stars = 1; 
	int blank = rows - 1;
    
    for(y=1; y<rows*2; y++){
        for(x=1; x<=blank; x++){
            printf(" ");
        }
        
        for(x=1; x<stars*2; x++){
            printf("*");
        }
        
        printf("\n");
        
        if(y<rows){
            blank--;
            stars++;
        }else{
            blank++;
            stars--;
        }
    }
    
    return 0;
}
