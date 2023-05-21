#include<stdio.h>
void main(){
    int a,b,c,max;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    if((a>b)&&(a>c)){
        max=a;
    }
    if((b>a)&& (b>c)){
        max=b;
    }
    if((c>a)&& (c>b)){
        max=c;
    }
    //print maximum number
    printf("The maximum number among the three number is %d",max);
}