
//7. Binary Search

#include <stdio.h>

#define MAX_SIZE 100

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid; // Return the index where the key is found
        } else if (arr[mid] < key) {
            low = mid + 1; // Key is in the right half
        } else {
            high = mid - 1; // Key is in the left half
        }
    }

    return -1; // Return -1 if key is not found
}

int main() {
    int arr[MAX_SIZE];
    int size, i, key, index;

    // Input array size
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Input array elements (assuming the array is sorted)
    printf("Enter %d sorted elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key to search
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform binary search
    index = binarySearch(arr, size, key);

    // Display search result
    if (index != -1) {
        printf("Key %d found at index %d.\n", key, index);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}
