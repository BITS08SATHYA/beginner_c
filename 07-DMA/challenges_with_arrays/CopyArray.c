//
// Created by sathipa on 23/7/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void allocateAndCopyArray(int* original, int sizeOriginal, int **target){

    *target = (int*) malloc(sizeOriginal * sizeof(int));
    if (*target != NULL){
        for(int i=0;i<sizeOriginal;i++){
            (*target)[i] = original[i];
        }
    }

}

int main(){
    int arrOriginal[3] = {1, 5, 4};

    int* copiedArr;

    allocateAndCopyArray(arrOriginal, 3, &copiedArr);

    printf("Orginal Array Addres: %p\n", &arrOriginal);
    printf("Copied Array Address: %p", copiedArr);
//    printf("Copied Array values: ");
//    for(int i=0;i<3;i++){
//        printf("%d", copiedArr[i]);
//    }
    free(copiedArr);
}