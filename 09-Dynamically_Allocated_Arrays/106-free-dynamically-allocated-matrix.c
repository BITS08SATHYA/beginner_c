//
// Created by sathipa on 3/8/25.
//
#include <stdio.h>
#include <malloc.h>

void freeMatrix(int **a, int rows){

    for(int i=0;i<rows;i++){
        free(a[i]);
    }
    free(a);
}

int main(){


    return 0;
}