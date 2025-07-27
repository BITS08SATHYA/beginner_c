//
// Created by sathipa on 27/7/25.
//
#include <stdio.h>
#include <malloc.h>

int main(){
    int *arr[5];
    for(int i=0;i<5;i++){
        arr[i] = (int*)calloc(3, sizeof(int));
    }
    arr[1][1] = 30;
    scanf("%d\n", &arr[0][2]);
    printf("Arr[4][2] = %d\n", arr[0][2]);
}