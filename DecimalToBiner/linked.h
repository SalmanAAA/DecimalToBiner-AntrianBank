#ifndef LINKED_H
#define LINKED_h
#include "boolean.h"

typedef struct Node{
    int data;
    struct Node* next;
}Node;

typedef Node* address;

address createNode(int data);
void insertHead(address* head, int data);
int deleteHead(address* head);
boolean isListEmpty(address head);
void printList(address head);


#endif