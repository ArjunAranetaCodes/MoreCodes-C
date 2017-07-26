//Variables and Input
#include <stdio.h>

int main(){
 char name[20];
 char sex;
 char enterkey;
 int age = 0;

 printf("What is your name? ");
 scanf("%s", name);
 enterkey = getchar();
 printf("What is your sex? (M or F) ");
 scanf("%c", &sex);
 printf("What is your age? ");
 scanf("%d", &age);

 printf("Name: %s\n", name);
 printf("Sex: %c\n", sex);
 printf("Age: %d\n", age);

 return 0;
}
