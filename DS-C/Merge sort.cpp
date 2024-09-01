#include <stdio.h>

// Function to merge two halves of the array
void merge(int arr[], int l, int m, int h) {
    int i = l; // Starting index for the left subarray
    int j = m + 1; // Starting index for the right subarray
    int k = 0; // Starting index for the temporary array
    int temp[h - l + 1]; // Temporary array to store the merged array

    // Merge the two subarrays into temp
    while (i <= m && j <= h) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of the left subarray, if any
    while (i <= m) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements of the right subarray, if any
    while (j <= h) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy the merged elements back into the original array
    for (i = l, k = 0; i <= h; i++, k++) {
        arr[i] = temp[k];
    }
}

// Function to perform merge sort on an array
void mergesort(int arr[], int l, int h) {
    if (l < h) {
        int m = (l + h) / 2;

        // Recursively sort the first and second halves
        mergesort(arr, l, m);
        mergesort(arr, m + 1, h);

        // Merge the two halves
        merge(arr, l, m, h);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is: \n");
    printArray(arr, n);

    mergesort(arr, 0, n - 1);

    printf("\nSorted array is: \n");
    printArray(arr, n);

    return 0;
}

