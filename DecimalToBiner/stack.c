#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

void inisialisasiStack(stack* s) {
    s->top = NULL;
}

boolean isStackEmpty(stack* s) {
    return s->top == NULL;
}

void push(stack* s, int data) {
    insertHead(&(s->top), data);
}

int pop(stack* s) {
    if (isStackEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return deleteHead(&(s->top));
}