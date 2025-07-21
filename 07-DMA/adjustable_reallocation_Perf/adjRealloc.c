//
// Created by sathipa on 20/7/25.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* adjustableReallocation(int *arrSize){
    int num, lastIndex = 0, size = 2;
    int* arr = NULL;
    int* temp = NULL;

    printf("Enter num: ");
    scanf("%d", &num);

    if(num == -1){
        *arrSize = 0;
        return NULL;
    }else{
        temp = (int*)malloc(size * sizeof(int));
        if (!temp) return NULL;
        arr = temp;
    }
    while (num != -1){
        if(lastIndex == size){
            size = size + 1;
            temp = (int*) realloc(arr, size * sizeof(int));
            if(!temp) return NULL;
            arr = temp;
        }
        arr[lastIndex] = num;
        lastIndex++;
        printf("Enter num: ");
        scanf("%d", &num);
    }
    arr = (int*)realloc(arr, lastIndex * sizeof(int));
    *arrSize = lastIndex;
    return arr;

}