//
// Created by sathipa on 3/8/25.
//
#include <stdio.h>
#include <malloc.h>



int** createUpperTriangular(int n){
    int** a;
    a = (int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        a[i] = (int*)malloc((n-i) * sizeof(int));
    }
    return a;
}

int** createLowerTriangular(int n){
    int **a;
    a = (int**)malloc(n * sizeof(int*));

    for(int i=0;i<n;i++){
        a[i] = (int*)malloc((i+1)*sizeof(int));
    }
    return a;
}

int main(){




    return 0;
}