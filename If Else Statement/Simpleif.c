#include<stdio.h>
void main(){
    int a;
    int b;
    printf("Enter the value for A: ");
    scanf("%d",&a);
    printf("Enter the value for B: ");
    scanf("%d",&b);
    if(a>b){
        printf("The greatest number is %d.",a);

    }
    if(a==b){
        printf("Both values are equal.");
    }
    else{
        printf("The greatest number is %d.",b);
    }
    
}