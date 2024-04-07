//3.insertion and deletion in array at user defined location

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i, pos, choice, element;

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
    printf("\n1. Insertion\n2. Deletion\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Insertion
            printf("Enter the position for insertion (0 to %d): ", size);
            scanf("%d", &pos);

            if (pos < 0 || pos > size) {
                printf("Invalid position!\n");
            } else {
                printf("Enter the element to insert: ");
                scanf("%d", &element);

                // Shift elements to the right
                for (i = size - 1; i >= pos; i--) {
                    arr[i + 1] = arr[i];
                }

                // Insert the element
                arr[pos] = element;
                size++;

                // Display updated array
                printf("\nUpdated Array after Insertion: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        case 2:
            // Deletion
            printf("Enter the position for deletion (0 to %d): ", size - 1);
            scanf("%d", &pos);

            if (pos < 0 || pos >= size) {
                printf("Invalid position!\n");
            } else {
                // Shift elements to the left
                for (i = pos; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;

                // Display updated array
                printf("\nUpdated Array after Deletion: ");
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
