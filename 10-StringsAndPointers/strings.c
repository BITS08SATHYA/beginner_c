//
// Created by sathipa on 18/8/25.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strConcat(char *originalStr);

int main(){

    char str[] = "Alpha";

    char *newStr = strConcat(str);

    if (newStr == NULL){
        fprintf(stderr, "Allocation Failed\n");
        return 1;
    }

    printf("%s\n", newStr);
//    free(newStr);
    return 0;
}

char *strConcat(char *originalStr){

    char *newStr;
    int lengthOriginal = strlen(originalStr);  // return 5
    int i;
    newStr = (char*) malloc((2* lengthOriginal + 1) * sizeof(char));

    for(i=0;i<strlen(originalStr);i++){
        newStr[i] = originalStr[i];
        newStr[i+lengthOriginal] = originalStr[i];
    }
    newStr[i+lengthOriginal] = '\0';

    return newStr;

}