//
// Created by sathipa on 20/7/25.
//
#include <stdio.h>
#include <malloc.h>

int main(){
    int *a;
    double *bArr;
    int arraySize;
    scanf("%d", &arraySize);
    a = (int*)malloc(sizeof(int)*arraySize);
    bArr = (double*)malloc(sizeof(double)*arraySize);

    if (bArr != NULL){
        printf("Allocation Succeded!\n");
    }else{
        printf("Allocation Failed.\n");
    }

    return 0;
}