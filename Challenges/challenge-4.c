//
// Created by sathipa on 19/7/25.
//
#include<stdio.h>
#include<stdlib.h>


int hasNeighbors(int *arr, int size){
    int i;
    for(int i=1;i<size;i++){
        if (arr[i] == arr[i-1] + arr[i+1]){
            return 1;
        }
    }
    return 0;
}

int main(){

}