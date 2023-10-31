#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Print the address of arr[0] and its value
    printf("Address of arr[0] - %p\n", &arr[0]);
    printf("Value of arr[0] - %d\n", arr[0]);

    // Print the address of the whole array and its value
    printf("Address of the array - %p\n", &arr);

    // Print the address and value of arr[1] and arr[2]
    printf("Address of arr[1] - %p\n", &arr[1]);
    printf("Value of arr[1] - %d\n", arr[1]);
    printf("Address of arr[2] - %p\n", &arr[2]);
    printf("Value of arr[2] - %d\n", arr[2]);

    // Print the address and value of arr[4]
    printf("Address of arr[4] - %p\n", &arr[4]);
    printf("Value of arr[4] - %d\n", arr[4]);

    // common defaint  all ar same usecall 
    printf("%d\n", *(arr+1));
    printf("%d\n", *(1+arr));
    printf("%d\n", arr[1]);
    printf("%d\n", 1[arr]);
    // arr[1] === *(arr+1)
    // *(arr+1) === arr[1]
    // *(1+arr)=== ar[1]/ 1[arr];
    return 0;
}
