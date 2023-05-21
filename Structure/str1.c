#include<stdio.h>
struct str1
{   
    int id;
    char name[20];
    int roll;
    char [25];
    char stream[25];
    
};
    void main(){
    struct str1 a;
    printf("Enter your name;");
    scanf("%s", &a.name);
    printf("%s", a.name);

}
