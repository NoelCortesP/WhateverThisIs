#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

int VerificationUsernameIFValid(char *username){

    int len = strlen(username);


    if(len < 3 || len >= 20){
        puts("\nUsername should atleast be 3 characters and not exceeding 20.\r");
        return 0;
    }

    for(int i = 0; i < len; i++){
        if(ispunct(username[i])){
        puts("\nNo special characters such as \"@, #, _, !\".");
        return 0;
        }
    }

    return 1;
}

int main(){

    char command[50], username[50];
    int validationStatus;

    do{
    printf("\nEnter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    validationStatus = VerificationUsernameIFValid(username);
    }while(validationStatus != 1);


    if(validationStatus == 1){
        printf("\nValid Username.");
    }

    abort();
}
