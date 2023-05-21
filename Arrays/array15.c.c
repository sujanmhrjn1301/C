#include<stdio.h>
void main(){
    int i, j;
    int a[3][3], b[3][3];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter the elements for A matrix:\n ", i, j);
                scanf("%d",&a[i][j] );
        }
        
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter the elements for B matrix:\n ", i, j);
                scanf("%d",&b[i][j] );
        }
        
    }
    
}