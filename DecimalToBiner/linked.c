#include "linked.h"
#include <stdlib.h>
#include <stdio.h>

address createNode(int data){
    address newNode = (address)malloc(sizeof(Node));
    if (newNode == NULL){
        printf("Gagal Alokasi\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertHead(address* head,int data){
    address newNode = createNode(data);
    if (newNode == NULL) return;
    newNode->next = *head;
    *head = newNode;

}

int deleteHead(address* head){
    if(*head == NULL){
        printf("List Kosong\n");
    }
    address temp = *head;
    int data = temp-> data;
    *head = (*head)->next;

    free(temp);// Dealokasi temp biar bisa di isi.
    return data;
}

boolean isListEmpty(address head){
    return head == NULL;
}

void printList(address head){
    address temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n"); // Node akhir.
}