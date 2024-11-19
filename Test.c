#include <stdio.h>
#include "RedirectServer.h"

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

}
