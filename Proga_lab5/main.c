#include <stdio.h>
int main() {
    int array[] = {123, 123, 123, 123, 456, 321, 1};
    for (int i = 0; i < 7; i++) {
        printf("%d ", array[i]);
    }
    int arr1[2][2] = {1, 2, 3, 1};
    int arr2[2][2] = {1, 0, 0, 1};
    int rez_arr[2][2];
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            rez_arr [i][j] = arr1[i][0]*arr2[0][j]+arr1[i][1]*arr2[1][j];
        }
    }
    printf("\n%d %d\n", rez_arr[0][0], rez_arr[0][1]);
    printf("%d %d\n ", rez_arr[1][0], rez_arr[1][1]);
    return 0;
}