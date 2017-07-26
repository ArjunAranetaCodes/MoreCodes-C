//Basics of Functions
#include <stdio.h>

//function that has no return value and no passing argument/parameter
void function1(){
 printf("Hello there!\n");
}

//function that has no return value but has passing argument/parameter
void function2(int num){
 printf("That number is %d\n", num);
}

//function that has return value but has no passing argument/parameter
int function3(){
 int sum = 1 + 1;
 return sum;
}

//function that has return value and has passing argument/parameter
char* function4(char* firstName, char* lastName){
 char* fullName;
 fullName = malloc(strlen(firstName) + 10);
 strcpy(fullName, firstName);
 strcat(fullName, lastName);
 return fullName;
}

int main(){
 function1();
 function2(5);
 printf("It's true! 1 + 1 = %d\n", function3());
 printf("Hi! %s", function4("More", "Codes"));
 return 0;
}
