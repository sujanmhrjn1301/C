#include<stdio.h>
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if((a%5==0) && (a%10==0)){
        printf("The number is divisible by 5 and 10.");
    }
    else{
        printf("The number is not divisible by 5 and 10.");
    }
}