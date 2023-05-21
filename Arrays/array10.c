#include<stdio.h>
void main(){
    int a[3],i;
    int sum=0;
    printf("Enter three numbers:\n");
    for(i=0; i<3; i++){
        scanf("%d", &a[i]);
        printf("A(%d)=%d\n",i, a[i]);
    }
    printf("The sum of the elements of the array is ");
    for(i=0; i<3; i++){
        sum=sum+a[i];
    }
    printf("%d", sum);
}