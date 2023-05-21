#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

struct str1{
    char n[20];
    int id;
    char s[20];
    char b[20];
};

void main(){
    int id,i;
    system("Color 0A");
    jump2:
    printf("Enter your BN ID:");
    scanf("%d",&id);
    if(id>=220374){
        goto jump1;
    }else{
        system("color c");
        printf("Invalid BN ID\n");
        printf("Please re-enter your BN ID\n");
        goto jump2;
    }
    jump1:
    
    switch(id){
        case 220374:    system("color a");
                        printf("BN ID      :%d\n", id);
                        printf("Name       :Sujan Maharjan\n");
                        printf("Address    :Godawari-12, Lalipur\n");
                        printf("Stream     :BSIT\n");
                        printf("Batch      :Summer 2022\n");
                        printf("Contact No :9860942721\n");
                        printf("Email      :mhrjnsujan.official@gmail.com\n");
        break;
        case 220375:    printf("BN ID      : %d\n", id);
                        printf("Name       :Srijan Maharjan\n");
                        printf("Address    :Godawari-11, Lalipur\n");
                        printf("Stream     :BSIT\n");
                        printf("Batch      :Summer 2022\n");
                        printf("Contact No :9823275574\n");
                        printf("Email      :maharjansri4@gmail.com\n");
    break;





    }  

    



}