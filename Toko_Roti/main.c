#include <stdio.h>
#include "roti.c"

int main() {
    int pilih;

    userlogin();
<<<<<<< Updated upstream
=======

    printf("Masukkan Pilihan : ");
    scanf("%d", &pilih);

    switch(pilih){
        case 1:
            printf("Masukkan Roti");
            CreateRoti();
            break;
        case 2:
            Read();
            break;
    }
>>>>>>> Stashed changes
    return 0;
}
