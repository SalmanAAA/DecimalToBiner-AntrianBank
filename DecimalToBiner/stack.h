#ifndef STACK_H
#define STACK_H

#include "linked.h"

typedef struct{
    address top;
}stack;

void inisialisasiStack(stack* s);
boolean isStackEmpty(stack* s);
void push(stack* s, int data);
int pop(stack* s);

#endif