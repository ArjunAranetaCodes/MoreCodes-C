//Problem 4: Write a program that converts a string to array/list.
#include <stdio.h>
#include <string.h>

int main ()
{
    char numbers [] ="1,2,3";
    char *pointer;
    pointer = strtok (numbers,",");
    int arrNumbers[3];
    int i = 0;
    
    while (pointer != NULL) {
        int a = atoi(pointer);
        arrNumbers[i] = a;
        i++;
        pointer = strtok (NULL, ",");
    }
    
    for(i = 0; i < sizeof(arrNumbers)/sizeof(int); i++){
    	printf("%d", arrNumbers[i]);
    }
    return 0;
}
