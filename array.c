#include <stdio.h>

#define MAX_SIZE 100

int main() {
      int arr[MAX_SIZE];
    int size = 0;
   

    for(;;) {                                                                                                                                                                           
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size < MAX_SIZE) {
                    printf("Enter the element to insert: ");
                    scanf("%d", &arr[size]);
                    size++;
                    printf("Element inserted successfully.\n");
                } else {
                    printf("Array is full. Cannot insert more elements.\n");
                }
                break;
            case 2:
                if (size > 0) {
                    printf("Enter the position to delete (0-%d): ", size - 1);
                    int position;
                    scanf("%d", &position);

                    if (position >= 0 && position < size) {
                        for (int i = position; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Element deleted successfully.\n");
                    } else {
                        printf("Invalid position for deletion.\n");
                    }
                } else {
                    printf("Array is empty. Nothing to delete.\n");
                }
                break;
            case 3:
                if (size > 0) {
                    printf("Array Elements: ");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Array is empty.\n");
                }
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;;
}


	

