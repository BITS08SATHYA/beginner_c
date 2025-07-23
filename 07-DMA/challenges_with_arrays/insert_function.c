//
// Created by sathipa on 23/7/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  address of first element, source arr total bytes, index , address of the source array, how many bytes it consumes (the source)
void* insert(void *arr, unsigned size, unsigned idx, void* src, unsigned sourceSize );


int main(){





    return 0;
}


void* insert(void* arr, unsigned size, unsigned idx, void* source, unsigned sourcesize){

    void* newArr = malloc(size + sourcesize);
    if (!newArr) return NULL;
    memcpy(newArr, arr, idx);
    memcpy((char*)newArr + idx, source, sourcesize);
    memcpy((char*)newArr + idx + sourcesize, (char*) arr + idx , size - idx);
    return newArr;

}