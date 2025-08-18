//
// Created by sathipa on 18/8/25.
//
#include <stdio.h>
#include <stdlib.h>

int strlen1(char *str);

int main(){

    char str[] = "Alpha";

    int length = strlen1(str);

    printf("%d\n", length);

    return 0;
}

int strlen1(char *str){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }

    return i;
}