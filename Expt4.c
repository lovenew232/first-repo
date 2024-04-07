
//Insertion and deletion at beginning

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i, choice, element;

    // Input array size
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display current array
    printf("\nCurrent Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Menu for insertion or deletion
    printf("\n1. Insertion at Beginning\n2. Deletion at Beginning\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Insertion at Beginning
            if (size >= MAX_SIZE) {
                printf("Array is full, cannot insert.\n");
            } else {
                printf("Enter the element to insert at the beginning: ");
                scanf("%d", &element);

                // Shift elements to the right
                for (i = size - 1; i >= 0; i--) {
                    arr[i + 1] = arr[i];
                }

                // Insert the element at the beginning
                arr[0] = element;
                size++;

                // Display updated array
                printf("\nUpdated Array after Insertion at Beginning: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        case 2:
            // Deletion at Beginning
            if (size <= 0) {
                printf("Array is empty, cannot delete.\n");
            } else {
                // Shift elements to the left
                for (i = 0; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;

                // Display updated array
                printf("\nUpdated Array after Deletion at Beginning: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
