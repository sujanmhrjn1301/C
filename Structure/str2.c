 #include<stdio.h>
  struct details
   {
     int id;
     char name[20];
    int roll;
    char class;
    char stream;
  };
     void main(){
     struct details a;
     printf("Enter your name:");
    scanf("%s", &a.name);
    printf("%s\n",a.name);
    printf("DETAILS OF SUJAN MAHARJAN");
    printf("\n---------------------------\n");
    printf("Name= %s\n", a.name);
    printf("BN ID= 220374\n");
    printf("Roll number = 34\n");
    printf("Class= Bachelor\n");
    printf("Program= BSIT\n");
    printf("------------------------------------------------------------------------\n");
    struct details b;
    printf("Enter your name:");
    scanf("%s", &b.name);
    printf("%s\n",b.name);
    printf("DETAILS OF %s", b.name);
    printf("\n---------------------------\n");
    printf("Name= %s\n", b.name);
    printf("BN ID= 220374\n");
    printf("Roll number = 34\n");
    printf("Class= Bachelor\n");
    printf("Program= BSIT\n");
                                

                                
                                
}
