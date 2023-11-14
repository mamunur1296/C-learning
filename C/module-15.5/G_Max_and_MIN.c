#include <stdio.h>

void MinMaxNumber(int *arr, int n, int *minNum, int *maxNum) {
    *minNum = arr[0];
    *maxNum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *minNum) {
            *minNum = arr[i];
        }
        if (arr[i] > *maxNum) {
            *maxNum = arr[i];
        }
    }
}

int main() {       
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxNumb, minNumb;
    MinMaxNumber(arr, n, &minNumb, &maxNumb);
    printf("%d %d", minNumb, maxNumb); 
    return 0;
}
