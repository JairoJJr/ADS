#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct queue {
    struct node *front;
    struct node *back;
};

struct queue *create_queue() {
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->front = NULL;
    q->back = NULL;
    return q;
}

void enqueue(struct queue *q, int data) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    if (q->front == NULL) {
        q->front = new_node;
        q->back = new_node;
    } else {
        q->back->next = new_node;
        q->back = new_node;
    }
}

int dequeue(struct queue *q) {
    if (q->front == NULL) {
        return -1;
    }

    int data = q->front->data;
    struct node *temp = q->front;
    q->front = q->front->next;
    free(temp);
    return data;
}

int is_empty(struct queue *q) {
    return q->front == NULL;
}

int is_full(struct queue *q) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        return 1;
    }
    return 0;
}

void print_queue(struct queue *q) {
    struct node *temp = q->front;
    while (temp != NULL) {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct queue *q = create_queue();
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    print_queue(q);
    int data = dequeue(q);
    printf("Dequeued element: %d\n", data);
    print_queue(q);
return 0;
}