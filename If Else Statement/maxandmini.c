#include<stdio.h>
void main(){
    int a,b;
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);
    if(a>b){
        printf("%d is the greatest.",a);    
    }
    if(a==b){
        printf("Both values are equal.");
    }
    else{
        printf("%d is the greatest.",b);
    }
    
}