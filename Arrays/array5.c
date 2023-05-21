#include<stdio.h>
void main(){
    int a[5];
    int i;
    
    printf("To read and write 5 values in arrays.\n");
    printf("-------------------------------------\n");
    printf("Enter your 5 values through the keyboard:");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
        printf("Array[%d]= %d\n",i, a[i]);
    }
    printf("        The elements of the arrays are: ");
    for(i=0; i<5; i++){
    printf(" % d ", a[i]);
    }
    

    
}