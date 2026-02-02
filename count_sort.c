#include <stdio.h>

int getMax(int arr[], int len) {
    int max = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[], int len, int max) {
    int count[max + 1];

    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < len; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {4, 3, 4, 2, 6, 8, 5, 1, 2};
    int len = sizeof(arr) / sizeof(arr[0]);

    int max = getMax(arr, len);
    countingSort(arr, len, max);

    printf("Sorted Array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
