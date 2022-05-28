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

void CreateRoti(){
    int pil;
    FILE *output;
    if ( ( output=fopen("roti.txt", "a+")) == NULL) {
                if ( ( output=fopen("roti.txt", "w+")) == NULL) {
                    printf ("Could not open file\n");
                    exit ( 1);
                }
            }
    pRoti=(struct roti *)malloc(sizeof(struct roti));
    FILE *output = fopen("roti.dat", "a+   "); // open the file to write
    pTRoti=(struct tokoroti *)malloc(sizeof(struct tokoroti));
    if (!output) {
        // return -1; // error
    }
    printf("Masukan pilihan MASUK ROTI: ");
    scanf("%d",&pil);
    switch (pil)
    {
    case 1:
        printf("Masukan Kode Roti: ");
        scanf("%9s",pTRoti->rt.kdRoti);
        printf("Masukan Nama Roti: ");
        scanf("%9s",pTRoti->rt.namaRoti);
        printf("Masukan Harga: ");
        scanf("%d",&pTRoti->rt.harga);
        printf("Masukan jenis roti: ");
        scanf("%s",pTRoti->rt.jenisRoti);
        printf("Masukan Stok: ");
        scanf("%d",&pTRoti->rt.stok);
        break;
    case 2:
        //pelanggan
        printf("Masukan Kode Pelanggan: ");
        scanf("%s",pTRoti->kry.kodeK);
        
        break;
    case 3:
        //karyawan
        break;
    case 4:
        //pembayaran
        break;
    default:
        break;
    }
        printf("Masukan Kode Roti: ");
        scanf("%s9",pRoti->kdRoti);
        printf("Masukan Nama Roti: ");
        scanf("%9s",pRoti->namaRoti);
        printf("Masukan Harga: ");
        scanf("%9d",&pRoti->harga);
        printf("1. Roti Tawar\n");
        printf("2. Roti Gandum\n");
        printf("3. Roti Manis\n");
        printf("Masukan pilihan roti: ");
        scanf("%9s",pRoti->jenisRoti);
        printf("Masukan Stok: ");
        scanf("%9d",&pRoti->stok);

        fwrite (pRoti, sizeof(struct roti), 1, output);
    fclose(output); // close
    return 0;
}
void CreatePlg(){ //masih error dalam implementasi struct
    int pil;
    FILE *output = fopen("pelanggan.dat", "a+ "); // open the file to write
    pPlg=(struct pelanggan *)malloc(sizeof(struct pelanggan));
    if (!output) {
        return -1; // error
    }
        printf("Masukan Kode Pelanggan: ");
        scanf("%9s",pPlg->kodeP);
        printf("Masukan Nama Pelanggan: ");
        scanf("%9s",pPlg->nama);
        printf("Masukan Alamat Pelanggan: ");
        scanf("%s",&pPlg->alamt);
        printf("Masukan No Telepon: ");
        scanf("%d",pPlg->notel);
        printf("Masukan Tempat Tanggal Lahir: ");
        scanf("%s",pPlg->ttl);

        fwrite (pPlg, sizeof(struct pelanggan), 1, output);
    fclose(output); // close
    // return 0;
}

void CreateKry(){ //masih error dalam implementasi struct
    int pil;
    FILE *output = fopen("karyawan.dat", "a+ "); // open the file to write
    pKry=(struct karyawan *)malloc(sizeof(struct karyawan));
        printf("Masukan Kode Karyawan: ");
        scanf("%9s",pKry->kodeK);
        printf("Masukan Nama karyawan: ");
        scanf("%9s",pKry->namaK);
        printf("Masukan Alamat karyawan: ");
        scanf("%s",&pKry->alamtK);
        printf("Masukan No Telepon: ");
        scanf("%d",pKry->notelp);
        printf("Masukan Gender: ");
        scanf("%s",pKry->gender);
        printf("Masukan Tempat Tanggal Lahir: ");
        scanf("%s",pKry->ttl);

        fwrite (pPlg, sizeof(struct karyawan), 1, output);
    fclose(output); // close
}

void CreateByr(){ //masih error dalam implementasi struct
    int pil;
    FILE *output = fopen("pembayaran.dat", "a+ "); // open the file to write
    pNota=(struct pembayaran *)malloc(sizeof(struct pembayaran));
    if (!output) {
        return -1; // error
    }
        printf("Masukan Kode pembayaran: ");
        scanf("%9s",pNota->id);
        printf("Masukan Nama pembayaran: ");
        scanf("%9s",pNota->menupesanan);
        printf("Masukan Alamat pembayaran: ");
        scanf("%s",&pNota->jenispembayaran);
        printf("Masukan No Telepon: ");
        scanf("%d",pNota->jumlah);
        printf("Masukan Tempat Tanggal Lahir: ");
        scanf("%s",pNota->total);

        fwrite (pPlg, sizeof(struct pembayaran), 1, output);
    fclose(output); // close
    return 0;
}

void Read(){
    FILE *output;
    struct roti pRoti;
    output = fopen("roti.txt","r");

    printf("Lihat Data Roti\n");

    if(output==NULL){
        fprintf(stderr,"Can't open file");
    } else{
        printf("Ini Adalah Roti\n");
    } while(fread(&pRoti,sizeof(struct roti),5,output)){
        printf("Kode Roti: %s\n",pRoti.kdRoti);
        printf("Nama Roti: %s\n",pRoti.namaRoti);
        printf("Harga: %d\n",pRoti.harga);
        printf("Jenis Roti: %s\n",pRoti.jenisRoti);
        printf("Stok: %d",pRoti.stok);
    }
    fclose(output);
    getch();

}
void userlogin(void){
    FILE *fp;
    char uName[10], pwd[10],name[10];int i;char c;

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
                printf("Kode Admin: ");
                scanf("%9s",pUser->kodeAdmin);
                printf("Name: ");
                scanf("%9s",pUser->name);
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

void Read(){
    FILE *output;
    struct roti pRoti;
    output = fopen("roti.dat","r");

    printf("Lihat Data Roti\n");

    if(output==NULL){
        fprintf(stderr,"Can't open file");
    } else{
        printf("Ini Adalah Roti\n");
    } while(fread(&pRoti,sizeof(struct roti),1,output)){
        printf("Kode Roti: %s\n",pRoti.kdRoti);
        printf("Nama Roti: %s\n",pRoti.namaRoti);
        printf("Harga: %d\n",pRoti.harga);
        printf("Jenis Roti: %s",pRoti.jenisRoti);
    }
    fclose(output);
    getch();

}