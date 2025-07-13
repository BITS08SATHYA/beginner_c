//
// Created by sathipa on 13/7/25.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>

// we assume that size > 0
void genericSwap(void *a, void *b, int size){

    // size -- specifies the number of bytes
    void* tempMemory = malloc(size);

//    Memory Copyu function
//  void * memcpy(void *dest, const void *src, size_t num)
// basically swap function is done here!

    memcpy(tempMemory, a, size);
    memcpy(a, b, size);
    memcpy(b, tempMemory, size);

    free(tempMemory);

}

int main(){

    int num1 = 5, num2 = 7;

    double average1 = 90.5, average2 = 89.7;

    genericSwap(&average1, &average2, sizeof(double ));
    genericSwap(&num1, &num2, sizeof(int));


    return 0;
}