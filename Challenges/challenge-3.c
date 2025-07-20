//
// Created by sathipa on 19/7/25.
//
#include<stdio.h>

int min(int *arr, int size){
    int smallest = arr[0];
    for(int i=1;i<size;i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int max(int *arr, int size){
    int largest = arr[0];
    for(int i=1;i<size;i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

void minMax(int *pArr, int size, int *minValue, int *maxValue){

    int i;
    *minValue = pArr[0];
    *maxValue = pArr[0];

    for(int i=1;i<size;i++){
        if (pArr[i] < *minValue ){
            *minValue = pArr[i];
        }
        if (pArr[i] > *maxValue){
            *maxValue = pArr[i];
        }
    }
}

int main(){

    int myGrades[] = {80, 90, 100};
    int size = sizeof(myGrades) / sizeof(myGrades[0]);
    int min, max;

    minMax(myGrades, size, &min, &max);

    printf("Smallest element in the array: %d\n", min);
    printf("Largest element in the array: %d\n", max);


    return 0;
}