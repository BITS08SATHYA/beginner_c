//
// Created by sathipa on 3/8/25.
//
#include <stdio.h>
#include <malloc.h>

void printLowerTriangular(int** a, int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i < j){
//                printf("%d", a[i][j]);
                printf("0");
            }else{
                printf("%d", a[i][j]);
            }
        }
        printf("\n");
    }

}

void printUpperTriangular(int** a, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i > j) {
                printf("0");
            }else{
                printf("%d", a[i][j]);
            }
        }
    }
}


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