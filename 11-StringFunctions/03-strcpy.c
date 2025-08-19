//
// Created by sathipa on 18/8/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Strcpy

// strcpy(char *strDestination, char *strSrc);

char *strcpy1(char *destination, char *src){

    char *tempPtr = destination;
    int i = 0;

    while(src[i] != '\0'){  // till we got to the end of the source string
        destination[i] = src[i];
        i++;
    }

    destination[i] = '\0';

    return destination;
}

int main(){

    char myNickName[] = "AlphaTech";
    char copyOfNickName[30];
    char *tempResult;

    tempResult = strcpy1(copyOfNickName, myNickName);

    printf("%s\n", copyOfNickName);


    return 0;
}