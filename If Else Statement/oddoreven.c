/*to check whether a number is odd or even*/
#include<stdio.h>
void main(){
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if(a%2==0 && (a>0)){
        printf("The number is even.");
    }    
    else{
        printf("The number is odd.");
    }
}