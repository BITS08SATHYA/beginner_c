//
// Created by sathipa on 3/8/25.
//
#include <stdio.h>
#include <malloc.h>

int main(){
    int** a; // pointer to pointer of integers
    int rows, columns;
    printf("Please enter number of rows: ");
    scanf("%d" , &rows);


    a = (int**)calloc(rows, sizeof(int*));
    for(int i=0;i<rows;i++){
        printf("Enter number of columns: ");
        scanf("%d", &columns);
        a[i] = (int*)calloc(columns, sizeof(int));
    }

}