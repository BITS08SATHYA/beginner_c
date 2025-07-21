//
// Created by sathipa on 20/7/25.
//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

void create1DArrayByRef(int arrSize, int** p){
    int* newArr;
    newArr = (int*) malloc(arrSize * sizeof(int));
    for(int i=0;i<arrSize;i++){
        printf("Enter value: ");
        scanf("%d", &newArr[i]);
    }

    *p = newArr;
}

void create1DArrayByRef_2(int arrSize, int** p){

    *p = (int*) malloc(arrSize * sizeof(int));
    for(int i=0;i<arrSize;i++){
        printf("Enter value: ");
        scanf("%d", &(*p)[i]);
    }
}

int main(){
    int size;
    int *ptr;
    printf("Enter the desired size of the array" );
    scanf("%d", &size);


    create1DArrayByRef(size, &ptr);
}