
//insertion and deletion at end

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
    printf("\n1. Insertion at End\n2. Deletion at End\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Insertion at End
            if (size >= MAX_SIZE) {
                printf("Overflow: Array is full, cannot insert.\n");
            } else {
                printf("Enter the element to insert at the end: ");
                scanf("%d", &element);

                // Insert the element at the end
                arr[size] = element;
                size++;

                // Display updated array
                printf("\nUpdated Array after Insertion at End: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        case 2:
            // Deletion at End
            if (size <= 0) {
                printf("Underflow: Array is empty, cannot delete.\n");
            } else {
                size--; // Decrement size to remove the last element

                // Display updated array
                printf("\nUpdated Array after Deletion at End: ");
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
