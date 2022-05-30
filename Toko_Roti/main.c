#include <stdio.h>
#include "roti.c"

int main() {
    int pilih;

    do
    {
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilih);

        switch(pilih){
            case 1:
                Create();
                break;
            case 2:
                Search();
                break;
            case 3:
                Update();
                break;
            case 4:
                Delete();
                break;
            default:
                printf("pilihan tidak ada\n");
                break;
        }
        printf("lanjut? ");
        scanf("%s", &lanjut);
    } while (lanjut=='y');
    
    
    // userlogin();
    // CreateRoti();
    return 0;
}