//
// Created by sathipa on 3/8/25.
//
#include <stdio.h>
#include <stdlib.h>

void** allocate2DMatrixByRef(int ***a,int rows, int columns){

    int** myMat;
    myMat = (int**) calloc(rows, sizeof(int));
//    if (!myMat) return NULL;

    for(int i=0;i<rows;i++){
        myMat[i] = (int*)calloc(columns, sizeof(int));
        if (!myMat[i]){
            return NULL;
        }
    }

    *a = myMat;
}


int main(){
    int row, columns;
    int **mat;
    printf("Enter rows: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &columns);
    allocate2DMatrixByRef(&mat, row, columns);

    mat[][]


    return 0;
}