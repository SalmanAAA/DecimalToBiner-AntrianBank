#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void clearScreen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    Queue Q;
    CreateQueue(&Q);

    infotype value;
    int choice, nextNumber = 1;

    while(1){
        clearScreen();
        printf("\n ===MENU=== \n");
        printf("1. Ambil Antrian\n");
        printf("2. Proses Antrian\n");
        printf("3. Cetak Antrian\n");
        printf("4. Keluar\n");

        printf("Input menu anda : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                if (is_Full(Q)) {
                    printf("Antrian penuh\n");
                } else {
                    EnQueue(&Q, nextNumber);
                    printf("Nomor antrian %d telah ditambahkan\n", nextNumber);
                    nextNumber++;
                }
                printQueue(Q);
                break;
            case 2:
                if (is_Empty(Q)) {
                    printf("Antrian kosong\n");
                } else {
                    deQueue(&Q, &value);
                    printf("Nomor antrian %d sedang diproses\n", value);
                    printQueue(Q);
                }
                break;
            case 3:
                printQueue(Q);
                break;
            case 4:
                printf("Program selesai\n");
                return 0;

            default:
                printf("Input invalid\n");
        }
        printf("\nTekan Enter untuk melanjutkan...");
        getchar(); 
        getchar();
    }
    return 0;
}