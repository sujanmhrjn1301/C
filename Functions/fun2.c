#include<stdio.h>
void fun2(char name[], int age){
  printf("Enter you name ans age: ");
  scanf("%s%d" &name,&age);
  printf("Your name is %s and you are %d years old.", name, age);
}
void main(){
  fun2();
}