//
// Created by sathipa on 3/8/25.
//
#include <stdio.h>
#include <malloc.h>

int** allocate2DMatrix(int rows, int columns){

    int** a;

    a = (int**)calloc(rows, sizeof(int*));

    if (!a) return NULL;


    for(int i=0;i<rows;i++){  // Allocating an array of integers for every row
        printf("Enter number of columns for each row %d ", i + 1);
        scanf("%d", &columns);
        a[i] = (int*)calloc(columns, sizeof(int));
        if (!a[i]){
            // # TODO --> freematrix


            return NULL;
        }
    }
    return a;

}


int main(){
    int** myMatrix;
    int rows, columns;

    printf("Enter number of rows for the 2D matrix: ");
    scanf("%d", &rows);

    printf("Enter number of columns for the 2D matrix: ");
    scanf("%d", &columns);

    myMatrix = allocate2DMatrix(rows, columns);

    return 0;

}