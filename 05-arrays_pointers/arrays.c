//
// Created by sathipa on 15/7/25.
//
#include<stdio.h>

int sumArray(const int *ptr, int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += ptr[i];
    }
    return sum;
}

int main(){
    int grades[3] = {3,5,7};
    int result;
    result = sumArray(&grades[0], 3);
    printf("Sum = %d\n", result);
}