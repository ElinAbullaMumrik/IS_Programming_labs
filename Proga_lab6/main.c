#include <stdio.h>
#include <malloc.h>

int main() {
    int n = 4;
    int *arr = (int *) _alloca(n * sizeof(int));
    arr [0] = -1;
    arr [1] = -12;
    arr [2] = -123;
    arr [3] = -1234;
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int *array;  // указатель на массив
    array = (int*)malloc(n * sizeof(int)); //выделяем память
    array [0] = -1;
    array [1] = -12;
    array [2] = -123;
    array [3] = -1234;
    for (size_t i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    free(array);
    return 0;
}