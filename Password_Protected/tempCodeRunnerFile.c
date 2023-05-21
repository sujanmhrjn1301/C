for(i=2;i>=0;i--){
        if(strcmp(password,pas)!=0){
            printf("Incorrect Password!. Please try again\n");
            printf("Enter your password: ");
            gets(password);
            printf("Verifying...\n");
            printf("Incorrect Password.\n");
            printf("You have %d tries left. ",i);
            

        }
        
    }