#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  int i=0,j=n-1;
  while (i<j)
  {
    int rtm=arr[i];
    arr[i]=arr[j];
    arr[j]=rtm;
    i++;
    j--;
  }
  
    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
