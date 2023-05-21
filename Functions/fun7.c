#include<stdio.h>
int diameter(int r);
int perimeter(int r);
int area(int r);
void main(){
    int r,d,p,a;
    
    printf("Enter the value of radius: ");
    scanf("%d", &r);
    printf("When radius is %d: \n",r);
    d= diameter(r);
    p= perimeter(r);
    a= area(r);
    printf("1. The diameter of given circle is %d.\n",d);
    printf("2. The perimeter of circle is %d.\n",p);
    printf("3. The area of circle is %d.\n",a);
 
}
int diameter(int r){
    return 2*r;
}
int perimeter(int r){
    return 2*3.14*r;
}
int area(int r){
    return 3.14*r*r;
}