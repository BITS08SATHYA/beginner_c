//
// Created by sathipa on 10/7/25.
//
#include <stdio.h>

void swap(int a, int b);

void main(){
    int a = 5, b = 7;
    int *p = &a;
    printf("\n");
    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("\n");

//    printf("First Number before swap = %d\n", a);
//    printf("Second Number before swap = %d\n", b);
//    swap(a, b);
//    printf("First Number after swap = %d\n", a);
//    printf("Second Number after swap = %d\n", b);

}


void swap(int num1, int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}