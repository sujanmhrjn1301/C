#include<stdio.h>
void main(){
    int a[5];
    int i;
    printf("To take numbers from user and show it in reverse order\n");
    printf("-----------------------------------------------------\n");
    printf("Enter your numbers:");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
        printf("A(%d)=%d\n",i, a[i]);
    }
    
    printf("The elements of the arrays are:");
    for(i=0; i<5; i++){
        printf("%5d", a[i]);
    }
    printf("\n");
    printf("The reversed order of the elements in the arrays are:");
    for(i=4; i>=0; i--){
        printf("%5d", a[i]);
    }
}