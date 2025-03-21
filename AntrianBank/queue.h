#ifndef QUEUE_H
#define QUEUE_H

#include "boolean.h"
#include "linked.h"

#define MAX_CAPACITY 100

typedef struct {
    address front;
    address rear;
    int size;
} Queue;

void CreateQueue(Queue *Q);

boolean is_Empty(Queue Q);

boolean is_Full(Queue Q);

void EnQueue(Queue *Q, infotype X);

void deQueue(Queue *Q, infotype *X);

void printQueue(Queue Q);

#endif