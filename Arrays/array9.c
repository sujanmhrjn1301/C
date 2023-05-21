#include<stdio.h>
void main(){
    int array[5];
    int i;
    printf("To take input from user and store it in array\n");
    printf("-------------------------------------------\n");
    printf("Enter your numbers:");
    for(i=0; i<5; i++){
        scanf("%d",&array[i]);
        printf("a(%d)= %d", i, array[i]);

    }
}