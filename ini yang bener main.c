#include <stdio.h>
#include "roti.c"

int main() {
    int pilih;
    int cek = CheckUser();
    if (cek == 1)
    {
        do
        {
            printf("\n===========================\n");
            printf("|  Edit Data Cake Bakery  |\n");
            printf("===========================\n");
            printf("|  1. Create              |\n");
            printf("|  2. Search              |\n");
            printf("|  3. Update              |\n");
            printf("|  4. Delete              |\n");
            printf("===========================\n");
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
    }




    // userlogin();
    // CreateRoti();
    return 0;
}
