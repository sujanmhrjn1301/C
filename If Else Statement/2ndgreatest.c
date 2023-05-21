#include<stdio.h>
void main(){
    int a=1;
    int b=3;
    int c=5;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    if(a>=b && a>=c){
        if(b>=c){
            printf("%d is the second largest number.",b);
        }else{
            printf("\n%d is the second largest number.",c);
        }
    }
    else if(b>=c){
        if(a>=c){
            printf("\n%d is the second largest number.",a);
        }else{
            printf("\n%d is the second largest number.",c);
        }
    }
    else {
        if(a>=b){
            printf("\n%d is the second largest number.",c);
        }else{
            printf("\n%d is the second greatest number.",b);
        }
    }
    
}