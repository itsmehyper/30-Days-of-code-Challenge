// Day 10 of 30 Days 👾

#include <stdio.h>
#include <stdlib.h>

int *commonElements(int *num, int size1, int *num2, int size2, int *resultSize) {
    int *res = (int *)malloc(sizeof(int) * (size1 < size2 ? size1 : size2));
    int count = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (num[i] == num2[j]) {
                res[count] = num[i];
                count++;
                break;
            }
        }
    }
    *resultSize = count;
    return res;
}

void printArray(int *array, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    // Examples
    int array1[] = {1, 2, 3};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = {4, 5, 6};
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int resultSize;
    int *result1 = commonElements(array1, size1, array2, size2, &resultSize);
    printArray(result1, resultSize); // Output: []

    int array3[] = {1, 2, 3, 4};
    int size3 = sizeof(array3) / sizeof(array3[0]);
    int array4[] = {3, 4, 5, 6};
    int size4 = sizeof(array4) / sizeof(array4[0]);
    int *result2 = commonElements(array3, size3, array4, size4, &resultSize);
    printArray(result2, resultSize); // Output: [3, 4]

    free(result1);
    free(result2);
    return 0;
}