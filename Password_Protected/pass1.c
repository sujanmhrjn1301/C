#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

#include<windows.h>
struct details
   {
     int id;
     char name[20];
    int roll;
    char class;
    char stream;
  };
void delay (int a){
    int add;
    int i;
    int time;
    time= a*100000000;
    for(i=0; i<time;i++){
        add*=i;
        add++;
        add++;
    }
}
void main(){
    char username[20],password[10];
    int i;
    char pas[10]="pass";
    
    printf("****************************************************************************************\n");
    system("Color 04");
    printf("*                                     Encrypted File                                   *\n");
    printf("****************************************************************************************\n");
    printf("Enter your name:");
    gets(username);
    printf("Please enter your login credentials\n");
    
    printf("Enter your password: ");
    gets(password);
    
    printf("Verifiying...\n");
    if(strcmp(password,pas)==0){
        jump:
        printf("********************************************************************************\n");
        printf("*                                   LOADING                                    *\n");
        printf("********************************************************************************\n");
        delay(2);
        printf("Welcome back, %s\n",username);
        struct details a;
        printf("Enter your BN ID:");
        scanf("%d",&a.id);
        printf("BN ID           :%d\n",a.id);
        printf("Name            : Sujan Maharjan\n");
        printf("Date of Birth   : 15/10/2000\n");
        printf("Address         : Godawari-12, Lalitpur\n");
        printf("Sex             : Male\n");
        printf("Contact No      : 9860942721\n");
        printf("Stream          : BSIT\n");
        printf("Batch           : Summer 2022\n");
    
   
        
    }
       
         for(i=2;i>0;i--){
        if(strcmp(password,pas)!=0){
            jump2:
            printf("Incorrect Password!. Please try again\n");
            printf("You have %d tries left.\n ",i);
            printf("Enter your password: ");
            gets(password);
            printf("Verifying...\n");
            
            if(strcmp(password,pas)==0){
                printf("Welcome %s,\n",username);
                goto jump;
            }else if(strcmp(password,pas)>1){
                goto jump3;
                //printf("E X I T");
            }
            
            
            

        }
        
    }
       
   
        


jump3:
printf("Incorrect Password. P L E A S E    E X I T ");

}
