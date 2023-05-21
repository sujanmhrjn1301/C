/*C program to dskplay array elements
 with address and then reversing it */
#include<stdio.h>
void main(){
    int a[100],n,i,sum=0;
    printf("Enter how many you elements you want in your array:");
    scanf("%d",&n);
    printf("You have entered %d.",n);
    for(i=0;i<n;i++){
              scanf("%d",&a[i]);
        printf("A[%d]=%d\n",i,a[i]);
        
    }
       printf("The elements in the array are:");
    for(i=0;i<n;i++){
        printf(" %d", a[i]);
    }
    
    
    printf("\n");
    printf("The reversed elements of array are:");
    for(i=n-1; i>=0; i--){
        printf("% d", a[i]);
    }
   
    
    
}