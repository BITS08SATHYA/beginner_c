//
// Created by sathipa on 15/7/25.
//
#include<stdio.h>

int search(const int *ptr, int size ,int targetElement){

    for(int i=0;i<size;i++){
        if (ptr[i] == targetElement){
            return i;
        }
    }
    return -1;
}

void main(){

    int arr[] = {1,7,8,3,54,122};

    int result = search(&arr[0], sizeof(arr), 54);

    printf("The targetElement is found at %d index. \n", result);
}