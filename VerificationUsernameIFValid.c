#include "RedirectServer.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
