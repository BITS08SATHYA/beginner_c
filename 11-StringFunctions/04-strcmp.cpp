//
// Created by sathipa on 18/8/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// three options available -- 1 -1 0
int strcmp(char *str1, char *str2){

    int i = 0, flag = 0;

    while (flag == 0) {  // as long as we didn't find any different characters

        if (str1[i] < str2[i]){
            flag = -1;
        }else if (str1[i] > str2[i]){
            flag = 1;
        }

        if (str1[i] == '\0'){ // ab abb
            break;
        }

        i++;
    }

    return flag;
}



int main(){

    char str1[] = "AlphaTech";
    char str2[] = "BlphaTech";

    int result = strcmp(str1, str2);

    printf("%d \n", result);

    return 0;
}