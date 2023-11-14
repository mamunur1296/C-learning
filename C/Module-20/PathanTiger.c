#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int m;
        scanf("%d", &m);
        char arr[m + 1];  

     
        scanf("%s", arr);

        int countT = 0;
        int countP = 0;


        for (int j = 0; j < m; j++) {
            if (arr[j] == 'T') {
                countT++;
            } else if (arr[j] == 'P') {
                countP++;
            }
        }

        if (countP > countT) {
            printf("Pathaan\n");
        } else if (countT > countP) {
            printf("Tiger\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}
