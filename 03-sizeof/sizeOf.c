//
// Created by sathipa on 12/7/25.
//
#include <stdio.h>

void main(){

    double x = 9.9;
    char xx =

//    printf("size = %lu\n", 03-sizeof(double));
    printf("size = %lu\n", sizeof(char));
//    printf("size = %lu\n", 03-sizeof(int));
//    printf("size = %lu\n", 03-sizeof(float));
    printf("size = %lu\n", sizeof('a'));
    printf("size = %lu\n", sizeof("a"));

    int grade = 80;
    double grade1 = 79.9;

    int grade11 = 80; int grade22 = 80;
    printf("Size of variable %lu\n", sizeof(grade11) + sizeof(grade22));

    double brr[5] = {1.3,3.5,2.4,9.9,7.2};

    printf("Array size: %lu " , sizeof(brr));

}