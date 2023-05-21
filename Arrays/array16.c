#include<stdio.h>
void main(){
    int i, j;
    int a[2][2], b[2][2], c[2][2];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Enter the elements for A matrix:\n ", i, j);
                scanf("%d",&a[i][j] );
        }
        
    }
    printf("%d", a[i][j]);
    printf("\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Enter the elements for B matrix:\n ", i, j);
                scanf("%d",&b[i][j] );
        }
        
    }

}