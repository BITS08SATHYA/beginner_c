#include<stdio.h>
#include<stdlib.h>

int *createNoDuplexArray(int *sourceArray, int size, int *newArraySize){

    int j = 0;
    int *noDuplexArray;
    int count = 1;
    for(int i=0;i<size-1;i++) {

        if (sourceArray[i] != sourceArray[i + 1]) {
            count++;
        }
    }

    noDuplexArray = (int *)malloc(count * sizeof(int));
    *newArraySize = count;

//        noDuplexArray[0] = sourceArray[0];
//        j = 1;

    for(int i=0;i<size-1;i++){
        if (sourceArray[i] != sourceArray[i+1]){
            noDuplexArray[j] = sourceArray[i];
            j++;
        }
    }

    noDuplexArray[j] = sourceArray[size - 1];
//    free(sourceArray);
    return noDuplexArray;
}

void printArray(int *arr, int size){
    printf("Array Values: \n");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int newArraySize;
    int originalArray[] = {1,3,3,5,6,7,7,7,8,12,12};
    int *resultArray = createNoDuplexArray(originalArray, 11, &newArraySize);
    printArray(resultArray, newArraySize);
    free(resultArray);
    return 0;
}