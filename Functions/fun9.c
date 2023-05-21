#include<stdio.h>
int add (a,b){
    return a+b;
}
void main(){
    int a ,b,sum;
    printf("Enter any two numbers:");
    scanf("%d",&a);
    scanf("%d", &b);
    sum= add(a,b);
    printf("The sum is %d",sum);
}