//
// Created by sathipa on 21/7/25.
//
#include<stdio.h>
#include<stdlib.h>

void printArray(int *arr, int size){
    printf("Array Values: \n");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}

void generateOddEvenArrays(int *sourceArray, int size){
    int *oddArray;
    int *evenArray;
    int evenArrayIndex = 0, oddArrayIndex = 0;
    int oddArraysSize=0 , evenArraySize=0;

    for(int i=0;i<size;i++){
        if (sourceArray[i] % 2 == 0){
            evenArraySize++;
        }else{
            oddArraysSize++;
        }
    }

    oddArray = (int*)malloc(oddArraysSize * sizeof(int));
    evenArray = (int*)malloc(evenArraySize * sizeof(int));

    for(int i=0;i<size;i++){
        if (sourceArray[i] % 2 == 0){
            evenArray[evenArrayIndex] = sourceArray[i];
            evenArrayIndex++;
        }else{
            oddArray[oddArrayIndex] = sourceArray[i];
            oddArrayIndex++;
        }
    }

    printf("Odd Array values: \n");
    printArray(oddArray, oddArraysSize);
    printf("Even Array Values: \n");
    printArray(evenArray, evenArraySize);

}

int main(){
    int originalArray[] = {12,5,7,8,3,10,4,9};
    printf("Source/Original Array Values: ");
    printf((const char *) originalArray, 8);
    return 0;
}
