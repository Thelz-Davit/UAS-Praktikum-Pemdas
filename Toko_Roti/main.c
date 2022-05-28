#include <stdio.h>
#include "roti.c"

int main() {
    int pil;char c;
    userlogin();
    printf("Masukan pilihan 1. create \n 2. Read\n");
    scanf("%d",&pil);

    switch(pil)
    {
    case 1:
        CreateRoti();
        break;
    case 2:
        Read();
        break;
    }




    return 0;
}
