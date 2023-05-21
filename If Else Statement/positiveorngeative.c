#include<stdio.h>
void main(){
    int a;
    printf("Enter your value: ");
    scanf("%d", &a);
    if(a>0){
        printf("%d is Positive number.",a);
    }
    if(a<0){
        printf("%d is Negative number.",a);
    }
    if(a==0){
        printf("%d is neither POSTIVE nor NEGATIVE.",a);
    }
    
    
    
    
    
}