//
// Created by sathipa on 15/7/25.
//
#include<stdio.h>
#include<limits.h>

int maxi(int *ptr, int size){

    int maximum = *ptr;

    for(int i=1;i<size;i++){
        if (ptr[i] > maximum){
            maximum = ptr[i];
        }
    }

    return maximum;
}

int main(){
    int arr[] = {1,7, 122,8,3,54};
    int result = maxi(&arr[0], sizeof(arr) / sizeof(arr[0]));
    printf("The max Element is %d. \n", result);
}