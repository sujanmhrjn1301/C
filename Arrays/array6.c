#include<stdio.h>
void main(){
    int a[5]= {1,2,3,4,5};
    int i;
    for(i=0; i<5; i++){
        printf("%5d",a[i]);
    }
    printf("\n");

    for(i=4; i>=0; i--){
        printf("%5d",a[i]);
    }
}