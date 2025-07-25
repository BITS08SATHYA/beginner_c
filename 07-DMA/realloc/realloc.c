//
// Created by sathipa on 20/7/25.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void* myRealloc(void* srcblock, unsigned oldsize, unsigned newSize);

int main(){

    int* numbers = (int*)malloc(3 * sizeof(int));
    int* newNumbers = NULL;
    if (!numbers)
        return 1;
    numbers[0] = 3;
    numbers[1] = 5;
    numbers[2] = 4;
    newNumbers = (int*) myRealloc(numbers, 3*sizeof(int), 4*sizeof(int));



}

void* myRealloc(void* srcblock, unsigned oldsize, unsigned newsize){

    int smallsize;
    if (oldsize < newsize){
        smallsize = oldsize;
    }else{
        smallsize = newsize;
    }

    char* resultArr = (char*)malloc(newsize);

    if (!resultArr) return NULL;
    for(int i=0;i<oldsize;i++){
        resultArr[i] = ((char*)srcblock)[i];
    }
    free(srcblock);
    return resultArr;
}

void* myRealloc_memcpy(void* srcblock, unsigned oldsize, unsigned newsize){

    int smallsize;
    void* newArr = malloc(newsize);
    if (oldsize < newsize){
        smallsize = oldsize;
    }else{
        smallsize = newsize;
    }

    memcpy(newArr, srcblock, smallsize);
}

