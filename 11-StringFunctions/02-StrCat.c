//
// Created by sathipa on 18/8/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// StrCat

char *strcat1(char *destStr, char *sourceStr){

    char *concatStr;
    int i = 0;
    int lengthDest , lengthSrc;
    lengthDest  = strlen(destStr);
    lengthSrc = strlen(sourceStr);

//    Memory allocation
    concatStr = (char*)malloc((lengthSrc + lengthDest) + 1);

    for(i=0;i<lengthDest;i++){
        concatStr[i] = destStr[i];
    }


    for(i=0;i<lengthSrc;i++){
        concatStr[i+lengthDest] = sourceStr[i];
    }

    concatStr[lengthDest + lengthSrc] = '\0';

    return concatStr;

}

int main(){
    char str1[] = "AlphaTech-";
    char str2[] = "BalphaTech";

    char* concatStr = strcat1(str1, str2);

    printf("%s\n", concatStr);

    free(concatStr);

    return 0;
}

