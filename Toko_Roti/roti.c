#include "roti.h"

void Create(){
    int pilCreate;
    printf("1.Roti\n2.Admin\n3.Karyawan\n4.Pelanggan\n5.Pembayaran\n");
    printf("Masukan pilihan data masuk: ");
    scanf("%d",&pilCreate);
    switch (pilCreate)
    {
        case 1:
            checkdupe:
            printf("Masukan Kode Roti: ");
            scanf("%s", sRoti.kdRoti);
            strcpy(namaFile, sRoti.kdRoti);
            strcat(namaFile, ".txt");
            strcat(dir, namaFile);
            fp = fopen(dir,"r+");
            if (fp != NULL)
            {
                printf("KODE DUPLIKAT\n");
                strcpy(dir,"Roties/");
                goto checkdupe;
            }
            fclose(fp);

            printf("Masukan Nama Roti: ");
            scanf("%s", sRoti.namaRoti);
            printf("Masukan Jenis Roti: ");
            scanf("%s", sRoti.jenisRoti);
            printf("Masukan Harga: ");
            scanf("%d", &sRoti.harga);
            printf("Masukan Stok: ");
            scanf("%d", &sRoti.stok);

            if (fp == NULL)
            {
                fp = fopen(dir, "w");
                fprintf(fp, "Kode: %s\n", sRoti.kdRoti);
                fprintf(fp, "Nama: %s\n", sRoti.namaRoti);
                fprintf(fp, "Jenis: %s\n", sRoti.jenisRoti);
                fprintf(fp, "Harga: %d\n", sRoti.harga);
                fprintf(fp, "Stok: %d\n", sRoti.stok);
                fclose(fp);
                printf("Data telah dimasukan!\n");
            }
            strcpy(dir,"Roties/");
            break;
        case 2:
            checkdupe2:
            printf("Masukan Kode Karyawan: ");
            scanf("%s", sKry.kodeK);
            strcpy(namaFile, sKry.kodeK);
            strcat(namaFile, ".txt");
            strcat(kry, namaFile);
            fp = fopen(kry,"r+");
            if (fp != NULL)
            {
                printf("KODE DUPLIKAT\n");
                strcpy(kry,"Karyawan/");
                goto checkdupe2;
            }
            fclose(fp);

            printf("Masukan Nama Karyawan: ");
            scanf("%s", sKry.namaK);
            printf("Masukan No HP Karyawan: ");
            scanf("%s", sKry.notel);
            printf("Masukan Alamat: ");
            scanf("%s", sKry.alamatK);
            printf("Masukan Gender: ");
            scanf("%s", sKry.gender);
            printf("Masukan Tanggal Lahir: ");
            scanf("%s", sKry.ttl);

            if (fp == NULL)
            {
                fp = fopen(kry, "w");
                fprintf(fp, "Kode: %s\n", sKry.kodeK);
                fprintf(fp, "Nama: %s\n", sKry.namaK);
                fprintf(fp, "No Hp: %s\n", sKry.notel);
                fprintf(fp, "Alamat: %s\n", sKry.alamatK);
                fprintf(fp, "Jenis Kelamin: %s\n", sKry.gender);
                fprintf(fp, "Tanggal Lahir: %s\n", sKry.ttl);
                fclose(fp);
                printf("Data telah dimasukan!");
            }
            strcpy(kry,"Karyawan/");
            break;
        case 3:
            checkdupe3:
            printf("Masukan Kode Pelanggan: ");
            scanf("%s", sPlg.kodeP);
            strcpy(namaFile, sPlg.kodeP);
            strcat(namaFile, ".txt");
            strcat(plgn, namaFile);
            fp = fopen(plgn,"r+");
            if (fp != NULL)
            {
                printf("KODE DUPLIKAT\n");
                strcpy(plgn,"Roties/");
                goto checkdupe3;
            }
            fclose(fp);

            printf("Masukan Nama Pelanggan: ");
            scanf("%s", sPlg.namaP);
            printf("Masukan No HP Pelanggan: ");
            scanf("%d", &sPlg.notel);
            printf("Masukan Alamat: ");
            scanf("%s", sPlg.alamatP);
            printf("Masukan Tanggal Lahir: ");
            scanf("%d", &sPlg.ttl);

            if (fp == NULL)
            {
                fp = fopen(plgn, "w");
                fprintf(fp, "Kode: %s\n", sPlg.kodeP);
                fprintf(fp, "Nama Pelanggan: %s\n", sPlg.namaP);
                fprintf(fp, "Nomor HP: %d\n", sPlg.notel);
                fprintf(fp, "Alamat: %s\n", sPlg.alamatP);
                fprintf(fp, "Tanggal Lahir: %d\n", sPlg.ttl);
                fclose(fp);
                printf("Data telah dimasukan!\n");
            }
            strcpy(plgn,"Pelanggan/");
            break;
        case 4:
            checkdupe4:
            printf("Masukan ID Detail: ");
            scanf("%s", sByr.id);
            strcpy(namaFile, sByr.id);
            strcat(namaFile, ".txt");
            strcat(pay, namaFile);
            fp = fopen(pay,"r+");
            if (fp != NULL)
            {
                printf("ID DUPLIKAT\n");
                strcpy(pay,"Pembayaran/");
                goto checkdupe4;
            }
            fclose(fp);

            printf("Masukan Menu Pemesanan: ");
            scanf("%s", sByr.menupesanan);
            printf("Masukan Jumlah Pesanan: ");
            scanf("%d", &sByr.jumlah);
            printf("Masukan Total Pembayaran: ");
            scanf("%d", &sByr.total);
            printf("Masukan Jenis Pembayaran: ");
            scanf("%s", sByr.jenispembayaran);

            if (fp == NULL)
            {
                fp = fopen(pay, "w");
                fprintf(fp, "ID Detail: %s\n", sRoti.kdRoti);
                fprintf(fp, "Menu Pesanan: %s\n", sRoti.namaRoti);
                fprintf(fp, "Jumlah Pesanan: %d\n", sRoti.jenisRoti);
                fprintf(fp, "Total Pesanan: %d\n", sRoti.harga);
                fprintf(fp, "Jenis Pembayaran: %s\n", sRoti.stok);
                fclose(fp);
                printf("Data telah dimasukan!");
            }
            strcpy(pay,"Pembayaran/");
            break;
    default:
        printf("Tidak ada pilihan");
        break;
    }        
};

void Search(){
    printf("Masukan Kode Roti: ");
    scanf("%s", sRoti.kdRoti);
    strcpy(namaFile, sRoti.kdRoti);
    strcat(namaFile, ".txt");
    strcat(dir, namaFile);

    fp = fopen(dir,"r+");
    if (fp == NULL)
    {
        printf("Kode Tidak ditemukan\n");
    }
    else
    {
        fscanf(fp, "Kode: %s\n", sRoti.kdRoti);
        fscanf(fp, "Nama: %s\n", sRoti.namaRoti);
        fscanf(fp, "Jenis: %s\n", sRoti.jenisRoti);
        fscanf(fp, "Harga: %d\n", &sRoti.harga);
        fscanf(fp, "Stok: %d\n", &sRoti.stok);
        printf("Nama: %s\n Jenis: %s\n Harga: %d\n Stok: %d\n",sRoti.namaRoti,sRoti.jenisRoti,sRoti.harga,sRoti.stok);    
    }
    fclose(fp);
    strcpy(dir,"Roties/");
}

void Read(){
    //pengenya read semua data, tp kayanya fitur search itu buat menampilkan udah cukup
}

void Update(){
    printf("Masukan Kode Roti yang akan diganti: ");
	scanf("%s", sRoti.kdRoti);
    strcpy(namaFile, sRoti.kdRoti);
    strcat(namaFile, ".txt");
    strcat(dir, namaFile);

    fp = fopen(dir,"r");
    if (fp == NULL)
    {
        perror("Error: ");
        fclose(fp);
    }
    else
    {
        fp = fopen(dir,"w");
        printf("Masukan Nama Roti: ");
        scanf("%s", sRoti.namaRoti);
        printf("Masukan Jenis Roti: ");
        scanf("%s", sRoti.jenisRoti);
        printf("Masukan Harga: ");
        scanf("%d", &sRoti.harga);
        printf("Masukan Stok: ");
        scanf("%d", &sRoti.stok);
        fprintf(fp, "Kode: %s\n", sRoti.kdRoti);
        fprintf(fp, "Nama: %s\n", sRoti.namaRoti);
        fprintf(fp, "Jenis: %s\n", sRoti.jenisRoti);
        fprintf(fp, "Harga: %d\n", &sRoti.harga);
        fprintf(fp, "Stok: %d\n", &sRoti.stok);
        fclose(fp);
    }
    strcpy(dir,"Roties/");
}

void Delete(){
    printf("Masukan Kode Roti yang akan dihapus: ");
	scanf("%s", sRoti.kdRoti);
    strcpy(namaFile, sRoti.kdRoti);
    strcat(namaFile, ".txt");
    strcat(dir, namaFile);
    remove(dir);
    printf("Data telah dihapus");
    strcpy(dir,"Roties/");
}

int CheckUser(){
    int askReg;
    printf("1.Login\n2.Registrasi\n");
    printf("Masukan Pilihan : ");
    scanf("%d", &askReg);
    switch (askReg)
    {
    case 1:
        login:
        printf("Masukan username: ");
        scanf("%s", sUser.username);
        strcpy(namaFile, sUser.username);
        strcat(namaFile, ".txt");
        strcat(use, namaFile);

        fp = fopen(use,"r+");
        if (fp == NULL)
        {
            printf("User Tidak ditemukan\n");
            strcpy(use,"Admin/");
            goto login;
        }
        else
        {
            fscanf(fp, "Kode Admin: %s\n", sUser.kodeAdmin);
            fscanf(fp, "Nama: %s\n", sUser.name);
            fscanf(fp, "Username: %s\n", sUser.username);
            fscanf(fp, "Password: %s\n", sUser.password);
        }
        
        printf("Masukan password: ");
        scanf("%s", passMasuk);
        if (strcmp(passMasuk, sUser.password)==0);
        {
            return 1;
        }
        break;
    case 2:
        do
        {
            checkdupeR:
            printf("Masukan Kode Admin: ");
            scanf("%s", sUser.kodeAdmin);
            printf("Masukan Nama: ");
            scanf("%s", sUser.name);
            printf("Masukan Username: ");
            scanf("%s", sUser.username);
            printf("Masukan Password: ");
            scanf("%s", sUser.password);
            strcpy(namaFile, sUser.username);
            strcat(namaFile, ".txt");
            strcat(use, namaFile);
            fp = fopen(use,"r+");
            if (fp != NULL)
            {
                printf("KODE DUPLIKAT\n");
                strcpy(use,"Admin/");
                goto checkdupeR;
            }
            fclose(fp);
            if (fp == NULL)
            {
                fp = fopen(use, "w");
                fprintf(fp, "Kode Admin: %s\n", sUser.kodeAdmin);
                fprintf(fp, "Nama: %s\n", sUser.name);
                fprintf(fp, "Username: %s\n", sUser.username);
                fprintf(fp, "Password: %s\n", sUser.password);
                fclose(fp);
                printf("Data telah dimasukan!\n");
            }
            strcpy(use,"Admin/");
            printf("Tambah User lagi?");
            scanf("%s",&tUser);

        } while (tUser=='y');
            break;
    default:
        break;
    }
}