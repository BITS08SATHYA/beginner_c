//
// Created by sathipa on 27/7/25.
//
#include <stdio.h>
#include <string.h>
#include <malloc.h>


int main(){
    int **a;
    int rows, columns;
    printf("Please enter number of rows: ");
    scanf("%d", &rows);

    a = (int**)calloc(rows, sizeof(int*));

    for(int i=0;i<rows;i++){
        printf("Enter number of columns: ");
        scanf("%d", &columns);
        a[i] = (int*)calloc(columns, sizeof(int));
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            a[i][j] = i+j+1;
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}