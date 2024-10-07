#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *front = NULL, *rear = NULL;

void enqueue();
void dequeue();
void display();

int main() { 
    int choice;
    while (1) {
        printf("\nMenu");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: exit(0);  
            default: printf("Invalid input\n");
        }
    }
    return 0; 
}

void enqueue() {
    struct node *tmp;
    int item;
    tmp = (struct node *)malloc(sizeof(struct node));
    if (tmp == NULL) {  
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter the value to be enqueued: ");
    scanf("%d", &item);
    tmp->data = item;
    tmp->link = NULL;
    if (front == NULL && rear == NULL) {
        front = tmp;
        rear = tmp;
    } else {
        rear->link = tmp;
        rear = tmp;
    }
}

void dequeue() {
    struct node *tmp;
    if (front == NULL) {  
        printf("Underflow\n");
        return;
    }
    tmp = front;
    printf("Deleted value = %d\n", tmp->data);
    front = front->link;
    free(tmp);
    if (front == NULL) {  
        rear = NULL;
    }
}

void display() {
    struct node *p;
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    p = front;
    while (p != NULL) {
        printf("%d\t", p->data);
        p = p->link;
    }
    printf("\n"); 
}

	

