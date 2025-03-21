#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void decimalToBinary(int decimal) {
    stack s;
    inisialisasiStack(&s);

    if (decimal == 0) {
        push(&s, 0);
    }

    // Konversi desimal ke biner
    while (decimal > 0) {
        push(&s, decimal % 2);
        decimal /= 2;
    }

    // Cetak hasil biner
    printf("Biner: ");
    while (!isStackEmpty(&s)) {
        printf("%d", pop(&s));
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Desimal: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}