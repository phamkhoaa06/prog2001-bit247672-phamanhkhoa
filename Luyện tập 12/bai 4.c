#include <stdio.h>

int timMin(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = 5;

    int min = timMin(arr, n);
    printf("Min = %d\n", min);

    return 0;
}