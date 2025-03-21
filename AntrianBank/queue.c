#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void CreateQueue(Queue *Q) {
    Q->front = Q->rear = NULL;
    Q->size = 0;
}

boolean is_Empty(Queue Q) {
    return isListEmpty(Q.front);
}

boolean is_Full(Queue Q) {
    return Q.size == MAX_CAPACITY; 
}

void EnQueue(Queue *Q, infotype X){
    if (is_Full(*Q)) {
        printf("Queue penuh\n");
        return;
    }

    address newNode = createNode(X);
    if (newNode == NULL) return;

    if (is_Empty(*Q)) {
        Q->front = Q->rear = newNode;
    } else {
        Q->rear->next = newNode;
        Q->rear = newNode;
    }

    Q->size++;
    printf("Nomor antrian %d telah ditambahkan\n", X);
}


void deQueue(Queue *Q, infotype *X) {
    if (is_Empty(*Q)) {
        printf("Antrian kosong\n");
        return;
    }

    deleteAwal(&(Q->front), X);
    if (Q->front == NULL) {
        Q->rear = NULL;
    }
    Q->size--;
    printf("Nomor antrian %d sedang diproses\n", *X);
}


void printQueue(Queue Q){
    printf("Antrian saat ini: ");
    printList(Q.front);
}