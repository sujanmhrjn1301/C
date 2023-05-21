#include<stdio.h>
int add(int,int);
void main(){
    int x,y,result; 
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    result= add(x,y);
    printf("The sum of two numbers is %d.",result);
}
int add(int x,int y){
    int sum=x+y;
    return sum;
}
