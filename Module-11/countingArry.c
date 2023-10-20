#include <stdio.h>

int main() {
    int a[14] = {0, 2, 5, 1, 0, 5, 0, 1, 5, 6, 8, 2, 4, 5};
    int i = 0;
    int count[9] = {0}; 
    while (i < 14) {
        count[a[i]]++;
        i++;
    }
    for (int i = 0; i <=9; i++)
    {
        printf("%d = %d\n",i, count[i]);
    }
    
    return 0;
}
