#include<stdio.h>
float square(float a);
float cube( float a);
void main(){
    float a,x,y;
    printf("Enter a number: ");
    scanf("%f",&a);
    x= square(a);
    y= cube(a);
    printf("The square of %f is %.2f.\n",a,x);
    printf("The cube of %f is %.2f.\n",a,y);
    getch();
}
float square(float a){
    return a*a;
}
float cube( float a){
    return a*a*a;
}