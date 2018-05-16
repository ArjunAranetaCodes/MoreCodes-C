//Problem 5: Write a program that converts an array/list to string.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int arrNumbers[] = {1,2,3};
    int i = 0;
    char numbers[5] = "";
    
    for(i = 0; i < sizeof(arrNumbers)/sizeof(int); i++){
		char str[10];
  		sprintf(str, "%d", arrNumbers[i]);
  		strcat(numbers, str);
    }
    
	printf("%s", numbers);
    
    return 0;
}
