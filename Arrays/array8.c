/*Write a C program to read n numbers of 
values in an array and display it in reverse order*/
#include<stdio.h>>
void main(){
    int a[100];
    int i,n;
    printf("Write a C program to read n numbers of values in an array and display it in reverse order\n");
    printf("----------------------------------------------------------------------------------------\n");
    printf("Enter your no. of elements to store in the array:");
            scanf("%d", &n);
        printf("Input %d  number of elements in the arrays:\n",n);
    for(i=0; i<n; i++){
        printf("A[%d]=",i);
        scanf("%d", &a[i]);
    }
    printf("The elements in the arrays are:");
    for(i=0; i<n; i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    printf("The reversed order of above array is:");
    for(i=n-1; i>=0; i--){
        printf(" %5d",a[i]);
    }


}