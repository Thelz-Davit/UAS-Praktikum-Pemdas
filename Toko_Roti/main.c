#include <stdio.h>
#include "roti.c"

int main() {
    int pilih;
    int cek = CheckUser();
    if (cek == 1)
    {
        do
        {
            tampilanmain();
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
            printf("Kembali Ke Menu (y/n)? ");
            scanf("%s", &lanjut);
        } while (lanjut=='y');
    }
    return 0;
}