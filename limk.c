#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtHead(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void insertAtTail(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void insertAtPosition(struct Node** head, int value, int position) {
    struct Node* posNode = (struct Node*)malloc(sizeof(struct Node));
    posNode->data = value;
    if (position == 1) {
        posNode->next = *head;
        *head = posNode;
    } else {
        struct Node* current = *head;
        for (int i = 1; i < position - 1 && current != NULL; i++) {
            current = current->next;
        }
        if (current == NULL) {
            printf("Invalid position\n");
        } else {
            posNode->next = current->next;
            current->next = posNode;
        }
    }
}

void deleteAtHead(struct Node** head) {
    if (*head != NULL) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
    } else {
        printf("List is empty\n");
    }
}

void deleteAtTail(struct Node** head) {
    if (*head != NULL) {
        if ((*head)->next == NULL) {
            free(*head);
            *head = NULL;
        } else {
            struct Node* current = *head;
            while (current->next->next != NULL) {
                current = current->next;
            }
            free(current->next);
            current->next = NULL;
        }
    } else {
        printf("List is empty\n");
    }
}

void searchElement(struct Node* head, int key) {
    int position = 1;
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            printf("Element found at position %d.\n", position);
            return;
        }
        current = current->next;
        position++;
    }
    printf("Element not found in the list.\n");
}

void displayList(struct Node* head) {
    printf("List: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, value, position, key;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at Head\n");
        printf("2. Insert at Tail\n");
        printf("3. Insert at Position\n");
        printf("4. Delete at Head\n");
        printf("5. Delete at Tail\n");
        printf("6. Search\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert at the head: ");
                scanf("%d", &value);
                insertAtHead(&head, value);
                break;

            case 2:
                printf("Enter the value to insert at the tail: ");
                scanf("%d", &value);
                insertAtTail(&head, value);
                break;

            case 3:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                printf("Enter the position: ");
                scanf("%d", &position);
                insertAtPosition(&head, value, position);
                break;

            case 4:
                deleteAtHead(&head);
                break;

            case 5:
                deleteAtTail(&head);
                break;

            case 6:
                printf("Enter the value to search: ");
                scanf("%d", &key);
                searchElement(head, key);
                break;

            case 7:
                displayList(head);
                break;

            case 8:
                return 0;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}



