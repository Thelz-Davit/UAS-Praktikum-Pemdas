#include "roti.h"

// void Update(char input[]) //masih testing berubah tidak, struct belum diimplementasikan
// {
//     char uChar[10];
//     char newData[10];
//     FILE *fp = fopen("pelanggan.txt","r+    ");
//     if (fp==NULL)
//     {
//         printf("File tidak bisa dibuka");
//     }
    
//     while (1)
//     {
//         fgets(uChar,10,fp);
//         if (strcmp(uChar,input)==0);
//         {
//             fseek(fp,10-1,SEEK_CUR); //angka yang tengah harusnya menghitung panjang variabel lalu di mulai dari belakang 
//             printf("Masukan isi baru");
//             scanf("%s",&newData);
//             fputs(newData,fp);
//             fseek(fp,0,SEEK_CUR); //blum beres angka ditengah harusnya "sampai bertemu tab/enter"
//         }
//         if (uChar==EOF)
//         {
//             break;
//         }
//     }
//     fclose(fp);
    
// }

// int Create(struct apapun *h){ //masih error dalam implementasi struct
//     char name[1024];
//     printf("Enter file name: " );
//     scanf("%s", name); // Read in filename
//     FILE *output = fopen(name, "w   "); // open the file to write
//     if (!output) {
//         return -1; // error
//     }
//     for (int i = 0; i < 1; ++i) {
//         // write a line - see fprintf documentation
//         fprintf(output, "%s %s %s %s\n", h[i].f_name, h[i].last, h[i].s,h[i].g);
//         // I'm missing some error checks here - you should not
//     }
//     fclose(output); // close
//     return 0;
// }

void userlogin(void){
    FILE *fp;
    char uName[10], pwd[10];int i;char c;

    pUser=(struct user *)malloc(sizeof(struct user));

    printf("1. Login Through An Existing Account\n2. Create New account\n");
    scanf("%d",& i);
    //system("cls");
    switch(i){
        case 1:
            if ( ( fp=fopen("user.dat", "r+")) == NULL) {
                if ( ( fp=fopen("user.dat", "w+")) == NULL) {
                    printf ("Could not open file\n");
                    exit ( 1);
                }
            }
            printf("Username: ");
            scanf("%9s",uName);
            printf("Password: ");
            scanf("%9s",pwd);
            while ( fread (pUser, sizeof(struct user), 1, fp) == 1) {
                if( strcmp ( pUser->username, uName) == 0) {
                    printf ("Match username\n");
                    if( strcmp ( pUser->password, pwd) == 0) {
                        printf ("Match password\n");
                        //accessUser();
                    }
                }
            }
            break;

        case 2:
            do
            {
                if ( ( fp=fopen("user.dat", "a+")) == NULL) {
                    if ( ( fp=fopen("user.dat", "w+")) == NULL) {
                        printf ("Could not open file\n");
                        exit ( 1);
                    }
                }
                printf("Choose A Username: ");
                scanf("%9s",pUser->username);
                printf("Choose A Password: ");
                scanf("%9s",pUser->password);
                fwrite (pUser, sizeof(struct user), 1, fp);
                printf("Add another account? (Y/N): ");
                scanf(" %c",&c);//skip leading whitespace
            }while(c=='Y'||c=='y');
            break;
    }
    free ( pUser);//free allocated memory
    fclose(fp);
}