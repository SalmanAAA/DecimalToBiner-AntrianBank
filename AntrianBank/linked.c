#include "linked.h"
#include <stdlib.h>
#include <stdio.h>

address createNode(infotype data) {
    address newNode = (address)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Alokasi gagal\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAkhir(address* head, infotype data) {
    address newNode = createNode(data);
    if (newNode == NULL) return;

    if (*head == NULL) {
        *head = newNode; 
    } else {
        address temp = *head;
        while (temp->next != NULL) {
            temp = temp->next; 
        }
        temp->next = newNode;
    }
}

void deleteAwal(address* head, infotype* data){
    if (*head == NULL) {
        printf("List kosong\n");
        return;
    }
    address temp = *head; 
    *data = temp->data;   
    *head = (*head)->next;
    free(temp);  // Dealokasi temp
} 

boolean isListEmpty(address head){
    return head == NULL;
}

void printList(address head){
    address temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}