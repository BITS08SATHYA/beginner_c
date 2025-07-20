//
// Created by sathipa on 19/7/25.
//
#include <stdio.h>

void updateAverage(int num1, int num2, float *average){
    *average = (num1 + num2) / 2.0f;
}

int main(){
    int a, b;
    float average;

    printf("Enter value for variable 'a': ");
    scanf("%d", &a);

    printf("Enter value for variable 'b': ");
    scanf("%d", &b);

    updateAverage(a, b, &average);

    printf("Average value is: %f\n", average);

    return 0;
}