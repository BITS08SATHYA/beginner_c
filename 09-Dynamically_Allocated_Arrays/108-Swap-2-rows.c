//
// Created by sathipa on 3/8/25.
//
#include <stdio.h>
#include <malloc.h>

void swapRows(void **a, int row1 , int row2){

    void* temp;
    temp =a[row1];
    a[row1] = a[row2];
    a[row2]=temp;

}


void swapColumns(int **a, int column1, int column2, int totalRows){

    int temp;
    for(int i=0;i<totalRows;i++){
        temp = a[i][column1];
        a[i][column1] = a[i][column2];
        a[i][column2] = temp;
    }

}


int main(){



    return 0;
}