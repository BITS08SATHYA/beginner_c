//
// Created by sathipa on 20/7/25.
//
#include<stdio.h>
#include<malloc.h>

void printArray(int *ptr, int size){
    printf("Printing the Grades:\n");
    for(int i=0;i<size;i++){
        printf("grades[%d] = %d\n", i, ptr[i]);
    }
    printf("Done.\n");
}


int main(){
    int *grades;
    int arraySize;
    printf("Enter the number of grades that you have: ");
    scanf("%d", &arraySize);
    grades = (int*)malloc(sizeof(int)*arraySize);
//  inputArray
    printArray(grades, arraySize);
    return 0;
}