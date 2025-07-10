//
// Created by sathipa on 10/7/25.
//
#include <stdio.h>

void findMinMax(int num1, int num2, int *pMax, int *pMin){
    if (num1 > num2){
        *pMax = num1;
        *pMin = num2;
    }else{
        *pMin = num1;
        *pMax = num2;
    };
}

void main(){
    int a = 5, b = 7;
    int max, min;
    findMinMax(a , b , &max, &min);
    printf("max between %d and %d = %d\n", a, b, max);
    printf("min between %d and %d = %d\n", a, b, min);
}