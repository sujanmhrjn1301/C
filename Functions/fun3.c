#include<stdio.h>
void fun3(){   
    char name[90];
    int age;
    printf("Enter you name:");
    scanf("%s", &name);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Your name is %s and your age is %d.\n",name, age);

}

void main(){
  fun3();
  
}