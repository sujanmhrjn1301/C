#include<stdio.h>
void main(){
    int a[3],i;
    int difference=0;
    printf("To find the area of rectangle\n");
    printf("Enter two numbers:\n ");
    for(i=0; i<2; i++){
        scanf("%d", &a[i]);
        printf("a(%d)=%d\n",i, a[i]);
    }
    printf("The difference rectangle is ");
    for(i=0; i<2; i++){
        difference= difference-a[i];
        printf("%d", difference);
    }
}