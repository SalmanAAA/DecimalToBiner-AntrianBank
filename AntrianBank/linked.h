#ifndef LINKED_H
#define LINKED_H

#include "boolean.h"

typedef int infotype;

typedef struct Node {
    infotype data;
    struct Node* next;
} Node;

typedef Node* address;

address createNode(infotype data);
void insertAkhir(address* head, infotype data);
void deleteAwal(address* head, infotype* data);

boolean isListEmpty(address head);
void printList(address head);

#endif