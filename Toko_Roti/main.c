#include <stdio.h>
#include "roti.c"

int main() {
    int pilih;
    char abc;
    userlogin();

    
    printf("Masukkan Pilihan : ");
    scanf("%d", &pilih);

    switch(pilih){
        case 1:
            
            CreateRoti();
            break;
        case 2:
            printf("Melihat Roti");
            Read();
            break;
    }
    // userlogin();
    // CreateRoti();
    return 0;
}