/* to check if a year is leap year or not*/
#include<stdio.h>
void main(){
    //condition for leap year
    /*leap year means like 2000, 2004, 2005 (4 years gap)
    or  
    1200, 1600, 2000,2400 centuries 400 centuries gap
    so we could say that leap year is divisible by 4 and 400 i.e, even
    but
    not divisible by odd number i.e 100*/
    /* if a year is divisible by 400 it is leap year
    but if
    a year is divisible by 100 and not divisible by 400 then it is not 
    a leap year.*/
     int y;
     printf("Enter any year: ");
     scanf("%d", &y);
     if(y%400==0 || y%4==0 && y%100!=0){
            printf("%d is a Leap Year.",y);
     }
    else{
        printf("%d is not a Leap Year.",y);
    }
}