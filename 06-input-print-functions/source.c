//
// Created by sathipa on 19/7/25.
//
#include <stdio.h>

#define SIZE 4

void inputArray(int *arr, int size){
    for(int i =0; i< size;i++){
        printf("Enter value #%d ", i + 1);
        scanf("%d ", &arr[i]);
    }
}

void displayArray(int *arr, int size){
    for(int i=0;i<size;i++){
        printf("Value #%d: %d\n", i + 1, arr[i]);
    }
}

int main(){
    int grades[SIZE];
    inputArray(grades, SIZE);



    return 0;
}
