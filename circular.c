#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

int isFull() {
    return ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1));
}

int isEmpty() {
    return (front == -1);
}

void insert(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot insert.\n");
    } else {
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = value;
        printf("Inserted: %d\n", value);
    }
}

void delete() {
    int deletedItem;
    if (isEmpty()) {
        printf("Queue is empty. Cannot delete.\n");
    } else {
        deletedItem = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        printf("Deleted: %d\n", deletedItem);
    }
}

void displayFront() {
    if (isEmpty()) {
        printf("Queue is empty. No front value to display.\n");
    } else {
        printf("Front value: %d\n", queue[front]);
    }
}

void displayRear() {
    if (isEmpty()) {
        printf("Queue is empty. No rear value to display.\n");
    } else {
        printf("Rear value: %d\n", queue[rear]);
    }
}

void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty. Nothing to display.\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        do {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nCircular Queue Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display Front\n");
        printf("4. Display Rear\n");
        printf("5. Display Queue\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                displayFront();
                break;
            case 4:
                displayRear();
                break;
            case 5:
                displayQueue();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
