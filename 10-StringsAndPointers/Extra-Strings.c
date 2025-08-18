//
// Created by sathipa on 18/8/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char charsArray = {'H','e','l','l','o','\0'};  // Option 1
    char str[] = "Hello";   // Option 2

    char *tempPtr = malloc(5 * sizeof(char) );

    for(int i=0;i<5;i++){
        tempPtr[i]  = charsArray[i];
    }

    tempPtr = (char *) charsArray;
    tempPtr[0] = 'G';  // Gello

    printf("String printed from charsArray: %s\n" , charsArray);
    printf("String printed from tempPtr: %s\n" , tempPtr);

    return 0;

}