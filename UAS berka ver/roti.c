#include "roti.h"

void Create()
{
    create:
    tampilan();
    printf("Masukan pilihan data yang akan diinputkan : ");
    scanf("%d",&pilCreate);
    switch (pilCreate)
    {
    case 1:
        do
        {
            checkdupe:
            printf("\n===============INPUT DATA ROTI===============");
            printf("\nMasukan Kode Roti     : ");
            scanf("%s", sRoti.kdRoti);
            strcpy(namaFile, sRoti.kdRoti);
            strcat(namaFile, ".txt");
            strcat(dir, namaFile);
            fp = fopen(dir,"r+");
            if (fp != NULL)
            {
                printf("***KODE DUPLIKAT***\n");
                strcpy(dir,"Roties/");
                goto checkdupe;
            }
            fclose(fp);

            printf("Masukan Nama Roti     : ");
            scanf("%s", sRoti.namaRoti);
            printf("Masukan Jenis Roti    : ");
            scanf("%s", sRoti.jenisRoti);
            printf("Masukan Harga         : ");
            scanf("%d", &sRoti.harga);
            printf("Masukan Stok          : ");
            scanf("%d", &sRoti.stok);

            if (fp == NULL)
            {
                fp = fopen(dir, "w");
                fprintf(fp, "Kode Roti  : %s\n", sRoti.kdRoti);
                fprintf(fp, "Nama Roti  : %s\n", sRoti.namaRoti);
                fprintf(fp, "Jenis Roti : %s\n", sRoti.jenisRoti);
                fprintf(fp, "Harga Roti : %d\n", sRoti.harga);
                fprintf(fp, "Stok: %d\n", sRoti.stok);
                fclose(fp);
                printf("DATA BERHASIL DIMASUKKAN!\n");
            }
            printf("Apakah Anda ingin menambahkan data roti lagi? ");
            scanf("%s", &tRoti);
            strcpy(dir,"Roties/");
        }
        while (tRoti=='y');
        break;
    case 2:
        do
        {
            checkdupe2:
            printf("\n===============INPUT DATA KARYAWAN===============");
            printf("\nMasukan Kode Karyawan     : ");
            scanf("%s", sKry.kodeK);
            strcpy(namaFile, sKry.kodeK);
            strcat(namaFile, ".txt");
            strcat(kry, namaFile);
            fp = fopen(kry,"r+");
            if (fp != NULL)
            {
                printf("***KODE DUPLIKAT***\n");
                strcpy(kry,"Karyawan/");
                goto checkdupe2;
            }
            fclose(fp);

            printf("Masukan Nama Karyawan     : ");
            scanf("%s", sKry.namaK);
            printf("Masukan No HP Karyawan    : ");
            scanf("%s", sKry.notel);
            printf("Masukan Alamat            : ");
            scanf("%s", sKry.alamatK);
            printf("Masukan Gender            : ");
            scanf("%s", sKry.gender);
            printf("Masukan Tanggal Lahir     : ");
            scanf("%s", sKry.ttl);

            if (fp == NULL)
            {
                fp = fopen(kry, "w");
                fprintf(fp, "Kode Karyawan  : %s\n", sKry.kodeK);
                fprintf(fp, "Nama Karyawan  : %s\n", sKry.namaK);
                fprintf(fp, "Nomor HP       : %s\n", sKry.notel);
                fprintf(fp, "Alamat         : %s\n", sKry.alamatK);
                fprintf(fp, "Jenis Kelamin  : %s\n", sKry.gender);
                fprintf(fp, "Tanggal Lahir  : %s\n", sKry.ttl);
                fclose(fp);
                printf("DATA BERHASIL DIMASUKKAN!\n");
            }
            printf("Apakah Anda ingin menambahkan data karyawan lagi? ");
            scanf("%s", &tKry);
            strcpy(kry,"Karyawan/");
        }
        while (tKry=='y');
        break;
    case 3:
        do
        {
            checkdupe3:
            printf("\n===============INPUT DATA PELANGGAN===============");
            printf("\nMasukan Kode Pelanggan    : ");
            scanf("%s", sPlg.kodeP);
            strcpy(namaFile, sPlg.kodeP);
            strcat(namaFile, ".txt");
            strcat(plgn, namaFile);
            fp = fopen(plgn,"r+");
            if (fp != NULL)
            {
                printf("***KODE DUPLIKAT***\n");
                strcpy(plgn,"Roties/");
                goto checkdupe3;
            }
            fclose(fp);

            printf("Masukan Nama Pelanggan    : ");
            scanf("%s", sPlg.namaP);
            printf("Masukan No HP Pelanggan   : ");
            scanf("%s", &sPlg.notel);
            printf("Masukan Alamat            : ");
            scanf("%s", sPlg.alamatP);
            printf("Masukan Tanggal Lahir     : ");
            scanf("%s", sPlg.ttl);

            if (fp == NULL)
            {
                fp = fopen(plgn, "w");
                fprintf(fp, "Kode Pelanggan : %s\n", sPlg.kodeP);
                fprintf(fp, "Nama Pelanggan : %s\n", sPlg.namaP);
                fprintf(fp, "Nomor HP       : %s\n", sPlg.notel);
                fprintf(fp, "Alamat         : %s\n", sPlg.alamatP);
                fprintf(fp, "Tanggal Lahir  : %s\n", sPlg.ttl);
                fclose(fp);
                printf("DATA BERHASIL DIMASUKKAN!\n");
            }
            printf("Apakah Anda ingin menambahkan data pelanggan lagi? ");
            scanf("%s", &tPlg);
            strcpy(plgn,"Pelanggan/");
        }
        while (tPlg=='y');
        break;
    case 4:
        checkdupe4:
        printf("\n===============INPUT DATA PEMBAYARAN===============");
        printf("\nMasukan ID Detail               : ");
        scanf("%s", sByr.id);
        strcpy(namaFile, sByr.id);
        strcat(namaFile, ".txt");
        strcat(pay, namaFile);
        fp = fopen(pay,"r+");
        if (fp != NULL)
        {
            printf("***ID DUPLIKAT***\n");
            strcpy(pay,"Pembayaran/");
            goto checkdupe4;
        }
        fclose(fp);
        do
        {
            operation:
            printf("Masukan Kode Menu Pemesanan     : ");
            scanf("%s", sByr.menupesanan);
            strcpy(sRoti.kdRoti,sByr.menupesanan);
            strcpy(files, sRoti.kdRoti);
            strcat(files, ".txt");
            strcat(dir, files);

            fo = fopen(dir,"r+");
            if (fo == NULL)
            {
                printf("KODE TIDAK DITEMUKKAN\n");
                strcpy(dir,"Roties/");
                goto operation;
            }
            else
            {
                fscanf(fo, "Kode Roti   : %s\n", sRoti.kdRoti);
                fscanf(fo, "Nama Roti   : %s\n", sRoti.namaRoti);
                fscanf(fo, "Jenis Roti  : %s\n", sRoti.jenisRoti);
                fscanf(fo, "Harga Roti  : %d\n", &sRoti.harga);
                fscanf(fo, "Stok        : %d\n", &sRoti.stok);
                printf("Masukan Jumlah Pesanan          : ");
                scanf("%d", &sByr.jumlah);
                printf("Masukan Total Pembayaran        : ");
                sByr.total = sRoti.harga * sByr.jumlah;
                printf("%d\n", sByr.total);
                printf("Masukan Jenis Pembayaran        : ");
                scanf("%s", sByr.jenispembayaran);
            }
            if (fp != NULL)
            {

                fp = fopen(pay, "a+");
                fprintf(fp, "ID Detail          : %s\n", sByr.id);
                fprintf(fp, "Menu Pesanan       : %s\n", sByr.menupesanan);
                fprintf(fp, "Jumlah Pesanan     : %d\n", sByr.jumlah);
                fprintf(fp, "Total Pesanan      : %d\n", sByr.total);
                fprintf(fp, "Jenis Pembayaran   : %s\n", sByr.jenispembayaran);
                fclose(fp);
                fclose(fo);
                printf("DATA BERHASIL DIMASUKKAN!\n");
            }

            if (fp == NULL)
            {

                fp = fopen(pay, "w");
                fprintf(fp, "Menu Pesanan       : %s\n", sByr.menupesanan);
                fprintf(fp, "Jumlah Pesanan     : %d\n", sByr.jumlah);
                fprintf(fp, "Total Pesanan      : %d\n", sByr.total);
                fprintf(fp, "Jenis Pembayaran   : %s\n", sByr.jenispembayaran);
                fclose(fp);
                fclose(fo);
                printf("DATA BERHASIL DIMASUKKAN!\n");

            }
            printf("Apakah Anda ingin menambahkan data pembayaran lagi? ");
            scanf("%s", &tBeli);
            strcpy(dir,"Roties/");
        }
        while (tBeli=='y');
        strcpy(pay,"Pembayaran/");
        break;
    default:
        printf("Tidak pilihan ada\n");
        goto create;
        break;
    }
};

void Search()
{
    search:
    tampilan();
    printf("Pilih data yang akan dicari : ");
    scanf("%d",&pilSearch);
    switch (pilSearch)
    {
    case 1:
        do
        {
            checksearch:
            printf("\nMasukan Kode Roti : ");
            scanf("%s", sRoti.kdRoti);
            strcpy(namaFile, sRoti.kdRoti);
            strcat(namaFile, ".txt");
            strcat(dir, namaFile);

            tampilanroti();
            fp = fopen(dir,"r+");
            if (fp == NULL)
            {
                printf("Kode Tidak ditemukan\n");
                strcpy(dir,"Roties/");
                goto checksearch;
                
            }
            else
            {
                fscanf(fp, "Kode Roti   : %s\n", sRoti.kdRoti);
                fscanf(fp, "Nama Roti   : %s\n", sRoti.namaRoti);
                fscanf(fp, "Jenis Roti  : %s\n", sRoti.jenisRoti);
                fscanf(fp, "Harga Roti  : %d\n", &sRoti.harga);
                fscanf(fp, "Stok        : %d\n", &sRoti.stok);
                printf("Nama Roti   : %s\n",sRoti.namaRoti);
                printf("Jenis Roti  : %s\n", sRoti.jenisRoti);
                printf("Harga Roti  : %d\n",sRoti.harga);
                printf("Stok        : %d\n",sRoti.stok);
            }
        fclose(fp);
        printf("Apakah Anda ingin mencari data roti lagi? ");
        scanf("%s", &findRoti);
        strcpy(dir,"Roties/");
        } while (findRoti=='y');
        break;
    case 2:
        do
        {
            checksearch1:
            printf("\nMasukan Kode Karyawan : ");
            scanf("%s", sKry.kodeK);
            strcpy(namaFile, sKry.kodeK);
            strcat(namaFile, ".txt");
            strcat(kry, namaFile);

            tampilankry();
            fp = fopen(kry,"r+");
            if (fp == NULL)
            {
                printf("Kode Tidak ditemukan\n");
                strcpy(kry,"Karyawan/");
                goto checksearch1;
            }
            else
            {
                fscanf(fp, "Kode Karyawan   : %s\n", sKry.kodeK);
                fscanf(fp, "Nama Karyawan   : %s\n", sKry.namaK);
                fscanf(fp, "Nomor HP        : %s\n", sKry.notel);
                fscanf(fp, "Alamat          : %s\n", sKry.alamatK);
                fscanf(fp, "Jenis Kelamin   : %s\n", sKry.gender);
                fscanf(fp, "Tanggal Lahir   : %s\n", sKry.ttl);
                printf("Kode Karyawan   : %s\n", sKry.kodeK);
                printf("Nama Karyawan   : %s\n",sKry.namaK);
                printf("Nomor HP        : %s\n",sKry.notel);
                printf("Alamat          : %s\n",sKry.alamatK);
                printf("Jenis Kelamin   : %s\n",sKry.gender);
                printf("Tanggal Lahir   : %s\n",sKry.ttl);
            }
            fclose(fp);
            printf("Apakah Anda ingin mencari data karyawan lagi? ");
            scanf("%s", &findKry);
            strcpy(kry,"Karyawan/");
        } while (findKry=='y');
        break;
    case 3:
        do
        {
            checksearch2:
            printf("\nMasukan Kode Pelanggan : ");
            scanf("%s", sPlg.kodeP);
            strcpy(namaFile, sPlg.kodeP);
            strcat(namaFile, ".txt");
            strcat(plgn, namaFile);

            tampilanplg();
            fp = fopen(plgn,"r+");
            if (fp == NULL)
            {
                printf("Kode Tidak ditemukan\n");
                strcpy(plgn,"Pelanggan/");
                goto checksearch2;
            }
            else
            {
                fscanf(fp, "Kode Pelanggan  : %s\n", sPlg.kodeP);
                fscanf(fp, "Nama Pelanggan  : %s\n", sPlg.namaP);
                fscanf(fp, "Nomor HP        : %s\n", sPlg.notel);
                fscanf(fp, "Alamat          : %s\n", sPlg.alamatP);
                fscanf(fp, "Tanggal Lahir   : %s\n", sPlg.ttl);
                printf("Kode Pelanggan  : %s\n", sPlg.kodeP);
                printf("Nama Pelanggan  : %s\n",sPlg.namaP);
                printf("Nomor HP        : %s\n",sPlg.notel);
                printf("Alamat          : %s\n",sPlg.alamatP);
                printf("Tanggal Lahir   : %s\n",sPlg.ttl);
            }
            fclose(fp);
            printf("Apakah Anda ingin mencari data pelanggan lagi? ");
            scanf("%s", &findPlg);
            strcpy(plgn,"Pelanggan/");
        } while (findPlg=='y');
        break;
    case 4:
        do
        {
            checksearch3:
            printf("\nMasukan Kode Pembayaran : ");
            scanf("%s", sByr.id);
            strcpy(namaFile, sByr.id);
            strcat(namaFile, ".txt");
            strcat(pay, namaFile);

            tampilanbyr();
            fp = fopen(pay,"r+");
            if (fp == NULL)
            {
                printf("Kode Tidak ditemukan\n");
                strcpy(pay,"Pembayaran/");
                goto checksearch3;
            }
            else
            {
                do
                {
                    fscanf(fp, "ID Detail           : %s\n", sByr.id);
                    fscanf(fp, "Menu Pesanan        : %s\n", sByr.menupesanan);
                    fscanf(fp, "Jumlah Pesanan      : %d\n", &sByr.jumlah);
                    fscanf(fp, "Total Pesanan       : %d\n", &sByr.total);
                    fscanf(fp, "Jenis Pembayaran    : %s\n", sByr.jenispembayaran);
                    printf("ID Detail           : %s\n", sByr.id);
                    printf("Menu Pesanan        : %s\n", sByr.menupesanan);
                    printf("Jumlah Pesanan      : %d\n", sByr.jumlah);
                    printf("Total Pesanan       : %d\n", sByr.total);
                    printf("Jenis Pembayaran    : %s\n", sByr.jenispembayaran);
                    totalSeluruh = totalSeluruh + sByr.total;
                }
                while (!feof(fp));
                printf("=================================\n");
                printf("Total Pesanan       : Rp %d\n",totalSeluruh);
            }
            fclose(fp);
            printf("Apakah Anda ingin mencari data pembayaran lagi? ");
            scanf("%s", &findByr);
            totalSeluruh=0;
            strcpy(pay,"Pembayaran/");
        } while (findByr=='y');
        
        break;
    default:
        printf("Pilihan tidak ada\n");
        goto search;
        break;
    }
}

void Update()
{
    update:
    tampilan();
    printf("Pilih data yang akan diubah : ");
    scanf("%d",&pilUpdate);
    switch (pilUpdate)
    {
    case 1:
        do
        {
            checkupdate:
            printf("\nMasukan kode roti yang akan diganti : ");
            scanf("%s", sRoti.kdRoti);
            strcpy(namaFile, sRoti.kdRoti);
            strcat(namaFile, ".txt");
            strcat(dir, namaFile);

            printf("\n===============UPDATE DATA ROTI===============\n");
            fp = fopen(dir,"r");
            if (fp == NULL)
            {
                printf("Kode Tidak ditemukan");
                strcpy(dir,"Roties/");
                goto checkupdate;
                fclose(fp);
            }
            else
            {
                fp = fopen(dir,"w");
                printf("Masukan Nama Roti   : ");
                scanf("%s", sRoti.namaRoti);
                printf("Masukan Jenis Roti  : ");
                scanf("%s", sRoti.jenisRoti);
                printf("Masukan Harga       : ");
                scanf("%d", &sRoti.harga);
                printf("Masukan Stok        : ");
                scanf("%d", &sRoti.stok);
                fprintf(fp, "Kode Roti  : %s\n", sRoti.kdRoti);
                fprintf(fp, "Nama Roti  : %s\n", sRoti.namaRoti);
                fprintf(fp, "Jenis Roti : %s\n", sRoti.jenisRoti);
                fprintf(fp, "Harga Roti : %d\n", sRoti.harga);
                fprintf(fp, "Stok       : %d\n", sRoti.stok);
                fclose(fp);
                fclose(fo);
                printf("DATA BERHASIL DIUBAH!\n");
            }
            strcpy(dir,"Roties/");
            printf("Apakah Anda ingin mengubah data roti lagi? ");
            scanf("%s", &upRoti);
        } while (upRoti=='y');
        break;
    case 2:
        do
        {
            checkupdate1:
            printf("\nMasukan kode karyawan yang akan diganti: ");
            scanf("%s", sKry.kodeK);
            strcpy(namaFile, sKry.kodeK);
            strcat(namaFile, ".txt");
            strcat(kry, namaFile);

            printf("\n===============UPDATE DATA KARYAWAN===============\n");
            fp = fopen(kry,"r");
            if (fp == NULL)
            {
                perror("Error: Kode tidak ditemukan ");
                strcpy(kry,"Karyawan/");
                goto checkupdate1;
                fclose(fp);
            }
            else
            {
                fp = fopen(kry,"w");
                printf("Masukan Nama Karyawan   : ");
                scanf("%s", sKry.namaK);
                printf("Masukan No Telepon      : ");
                scanf("%s", sKry.notel);
                printf("Masukan Alamat          : ");
                scanf("%s", sKry.alamatK);
                printf("Masukan Jenis Kelamin   : ");
                scanf("%s", sKry.gender);
                printf("Masukan Tanggal Lahir   : ");
                scanf("%s", sKry.ttl);
                fprintf(fp, "Kode Karyawan      : %s\n", sKry.kodeK);
                fprintf(fp, "Nama Karyawan      : %s\n", sKry.namaK);
                fprintf(fp, "Nomor Hp Karyawan  : %s\n", sKry.notel);
                fprintf(fp, "Alamat             : %s\n", sKry.alamatK);
                fprintf(fp, "Jenis Kelamin      : %s\n", sKry.gender);
                fprintf(fp, "Tanggal Lahir      : %s\n", sKry.ttl);
                fclose(fp);
                fclose(fo);
                printf("DATA BERHASIL DIUBAH!\n");
            }
            strcpy(kry,"Karyawan/");
            printf("Apakah Anda ingin mengubah data karyawan lagi? ");
            scanf("%s", &upKry);
        } while (upKry=='y');
        break;
    case 3:
        do
        {
            checkupdate2:
            printf("\nMasukan kode pelanggan yang akan diganti: ");
            scanf("%s", sPlg.kodeP);
            strcpy(namaFile, sPlg.kodeP);
            strcat(namaFile, ".txt");
            strcat(plgn, namaFile);

            printf("\n===============UPDATE DATA PELANGGAN===============\n");
            fp = fopen(plgn,"r");
            if (fp == NULL)
            {
                perror("Error: ");
                strcpy(plgn,"Pelanggan/");
                goto checkupdate2;
                fclose(fp);
            }
            else
            {
                fp = fopen(plgn,"w");
                printf("Masukan Nama Pelanggan   : ");
                scanf("%s", sPlg.namaP);
                printf("Masukan No Telepon      : ");
                scanf("%s", sPlg.notel);
                printf("Masukan Alamat          : ");
                scanf("%s", sPlg.alamatP);
                printf("Masukan Tanggal Lahir   : ");
                scanf("%s", sPlg.ttl);
                fprintf(fp, "Kode Pelanggan : %s\n", sPlg.kodeP);
                fprintf(fp, "Nama Pelanggan : %s\n", sPlg.namaP);
                fprintf(fp, "Nomor HP       : %s\n", sPlg.notel);
                fprintf(fp, "Alamat         : %s\n", sPlg.alamatP);
                fprintf(fp, "Tanggal Lahir  : %s\n", sPlg.ttl);
                fclose(fp);
                fclose(fo);
                printf("DATA BERHASIL DIUBAH!\n");
            }
            strcpy(plgn,"Pelanggan/");
            printf("Apakah Anda ingin mengubah data pelanggan lagi? ");
            scanf("%s", &upPlg);
        } while (upPlg=='y');
        break;
    case 4:
        do
        {
            checkupdate3:
            printf("\nMasukan kode pembayaran yang akan diganti : ");
            scanf("%s", sByr.id);
            strcpy(namaFile, sByr.id);
            strcat(namaFile, ".txt");
            strcat(pay, namaFile);

            printf("\n===============UPDATE DATA PEMBAYARAN===============\n");
            fp = fopen(pay,"r");
            if (fp == NULL)
            {
                perror("Error: ");
                strcpy(pay,"Pembayaran/");
                fclose(fp);
                goto checkupdate3;
            }
            do
            {
                operation:
                printf("Masukan Kode Pemesanan Roti: ");
                scanf("%s", sByr.menupesanan);
                strcpy(sRoti.kdRoti,sByr.menupesanan);
                strcpy(files, sRoti.kdRoti);
                strcat(files, ".txt");
                strcat(dir, files);

                fo = fopen(dir,"r+");
                if (fo == NULL)
                {
                    printf("Kode Tidak ditemukan\n");
                    strcpy(dir,"Roties/");
                    goto operation;
                }
                else
                {
                    fscanf(fo, "Kode Roti   : %s\n", sRoti.kdRoti);
                    fscanf(fo, "Nama Roti   : %s\n", sRoti.namaRoti);
                    fscanf(fo, "Jenis Roti  : %s\n", sRoti.jenisRoti);
                    fscanf(fo, "Harga Roti  : %d\n", &sRoti.harga);
                    fscanf(fo, "Stok        : %d\n", &sRoti.stok);
                    printf("Masukan Jumlah Pesanan  : ");
                    scanf("%d", &sByr.jumlah);
                    printf("Masukan Total Pembayaran: ");
                    sByr.total = sRoti.harga * sByr.jumlah;
                    printf("%d\n", sByr.total);
                    printf("Masukan Jenis Pembayaran: ");
                    scanf("%s", sByr.jenispembayaran);
                }
                if (updated==0)
                {
                    fp = fopen(pay, "w");
                    fprintf(fp, "Menu Pesanan       : %s\n", sByr.menupesanan);
                    fprintf(fp, "Jumlah Pesanan     : %d\n", sByr.jumlah);
                    fprintf(fp, "Total Pesanan      : %d\n", sByr.total);
                    fprintf(fp, "Jenis Pembayaran   : %s\n", sByr.jenispembayaran);
                    fclose(fp);
                    printf("DATA BERHASIL DIUBAH!\n");
                }
                if (updated==1)
                {
                    fp = fopen(pay, "a");
                    fprintf(fp, "ID Detail          : %s\n", sByr.id);
                    fprintf(fp, "Menu Pesanan       : %s\n", sByr.menupesanan);
                    fprintf(fp, "Jumlah Pesanan     : %d\n", sByr.jumlah);
                    fprintf(fp, "Total Pesanan      : %d\n", sByr.total);
                    fprintf(fp, "Jenis Pembayaran   : %s\n", sByr.jenispembayaran);
                    fclose(fp);
                    printf("DATA BERHASIL DIUBAH!\n");
                }

                
                printf("Apakah Anda ingin menambah roti lagi? ");
                scanf("%s", &tBeli);
                updated = 1;
                strcpy(dir,"Roties/");
            }
            while (tBeli=='y');
            strcpy(pay,"Pembayaran/");
            printf("Apakah Anda ingin mengubah data pembayaran lagi? ");
            scanf("%s", &upByr);
            fclose(fo);
            updated=0;
        } while (upByr=='y');
        
        break;
    default:
        printf("Pilihan tidak ada");
        goto update;
        break;
    }

}

void Delete()
{
    delete:
    tampilan();
    printf("Pilih data yang akan dihapus :");
    scanf("%d",&pilDel);
    switch (pilDel)
    {
    case 1:
        do
        {
            checkdel:
            printf("\nMasukan Kode Roti yang akan dihapus: ");
            scanf("%s", sRoti.kdRoti);
            strcpy(namaFile, sRoti.kdRoti);
            strcat(namaFile, ".txt");
            strcat(dir, namaFile);
            fo = fopen(dir,"r+");
                if (fo == NULL)
                {
                    printf("Kode Tidak ditemukan\n");
                    strcpy(dir,"Roties/");
                    fclose(fo);
                    goto checkdel;   
                }
            fclose(fo);
            remove(dir);
            printf("DATA BERHASIL DIHAPUS\n");
            strcpy(dir,"Roties/");
            printf("Apakah Anda ingin menghapus data roti lagi? ");
            scanf("%s", &delRoti);
        } while (delRoti=='y');
        break;
    case 2:
        do
        {
            checkdel1:
            printf("\nMasukan Kode Karyawan yang akan dihapus: ");
            scanf("%s", sKry.kodeK);
            strcpy(namaFile, sKry.kodeK);
            strcat(namaFile, ".txt");
            strcat(kry, namaFile);
            fo = fopen(kry,"r+");
                if (fo == NULL)
                {
                    printf("Kode Tidak ditemukan\n");
                    strcpy(kry,"Karyawan/");
                    fclose(fo);
                    goto checkdel1;
                }
            fclose(fo);
            remove(kry);
            printf("DATA BERHASIL DIHAPUS\n");
            strcpy(kry,"Karyawan/");
            printf("Apakah Anda ingin menghapus data karyawan lagi? ");
            scanf("%s", &delKry);
        } while (delKry=='y');
        break;
    case 3:
        do
        {
            checkdel2:
            printf("\nMasukan Kode Pelanggan yang akan dihapus: ");
            scanf("%s", sPlg.kodeP);
            strcpy(namaFile, sPlg.kodeP);
            strcat(namaFile, ".txt");
            strcat(plgn, namaFile);
            fo = fopen(plgn,"r+");
                if (fo == NULL)
                {
                    printf("Kode Tidak ditemukan\n");
                    strcpy(plgn,"Pelanggan/");
                    fclose(fo);
                    goto checkdel2;
                }
            fclose(fo);
            remove(plgn);
            printf("DATA BERHASIL DIHAPUS\n");
            strcpy(plgn,"Pelanggan/");
            printf("Apakah Anda ingin menghapus data pelanggan lagi? ");
            scanf("%s", &delPlg);
        } while (delPlg=='y');
        break;
    case 4:
        do
        {
            checkdel3:
            printf("\nMasukan Kode Pembayaran yang akan dihapus: ");
            scanf("%s", sByr.id);
            strcpy(namaFile, sByr.id);
            strcat(namaFile, ".txt");
            strcat(pay, namaFile);
            fo = fopen(pay,"r+");
                if (fo == NULL)
                {
                    printf("Kode Tidak ditemukan\n");
                    strcpy(pay,"Pembayaran/");
                    fclose(fo);
                    goto checkdel3;
                }
            fclose(fo);
            remove(pay);
            printf("DATA BERHASIL DIHAPUS\n");
            strcpy(pay,"Pembayaran/");
            printf("Apakah Anda ingin menghapus data pembayaran lagi? ");
            scanf("%s", &delByr);
        } while (delByr=='y');
        break;
    default:
        printf("Tidak ada pilihan\n");
        goto delete;
        break;
    }
}

int CheckUser()
{
    back:
    tampilandaftar();
    printf("Masukan Pilihan : ");
    scanf("%d", &askReg);
    switch (askReg)
    {
    case 1:
        login:
        tampilanlogin();
        printf("Masukan username : ");
        scanf("%s", sUser.username);
        strcpy(namaFile, sUser.username);
        strcat(namaFile, ".txt");
        strcat(use, namaFile);

        fp = fopen(use,"r+");
        if (fp == NULL)
        {
            printf("User Tidak ditemukan\n");
            strcpy(use,"Admin/");
            try--;
            if (try==0)
                {
                    goto back;
                }

            goto login;
        }
        else
        {
            fscanf(fp, "Kode Admin  : %s\n", sUser.kodeAdmin);
            fscanf(fp, "Nama        : %s\n", sUser.name);
            fscanf(fp, "Username    : %s\n", sUser.username);
            fscanf(fp, "Password    : %s\n", sUser.password);
        }

        printf("Masukan password : ");
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
            tampilanregis();
            printf("Masukan Kode Admin : ");
            scanf("%s", sUser.kodeAdmin);
            printf("Masukan Nama       : ");
            scanf("%s", sUser.name);
            printf("Masukan Username   : ");
            scanf("%s", sUser.username);
            printf("Masukan Password   : ");
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
                fprintf(fp, "Kode Admin : %s\n", sUser.kodeAdmin);
                fprintf(fp, "Nama       : %s\n", sUser.name);
                fprintf(fp, "Username   : %s\n", sUser.username);
                fprintf(fp, "Password   : %s\n", sUser.password);
                fclose(fp);
                printf("Data telah dimasukan!\n");
            }
            strcpy(use,"Admin/");
            printf("Tambah User lagi? ");
            scanf("%s",&tUser);
            printf("\n");

        }
        while (tUser=='y');
        goto back;
        break;
    default:
        printf("Pilihan tidak ada\n");
        goto back;
        break;
    }
}
void tampilan()
{
    printf("\n==================================================\n");
    printf("|            Data Toko Roti Cake Bakery          |\n");
    printf("==================================================\n");
    printf("|  1. Roti                                       |\n");
    printf("|  2. Karyawan                                   |\n");
    printf("|  3. Pelanggan                                  |\n");
    printf("|  4. Pembayaran                                 |\n");
    printf("==================================================\n");
}
void tampilankry()
{
    printf("==============================\n");
    printf("| Data Karyawan Cake Bakery |\n");
    printf("==============================\n");
}
void tampilanplg()
{
    printf("==============================\n");
    printf("| Data Pelanggan Cake Bakery |\n");
    printf("==============================\n");
}
void tampilanbyr()
{
    printf("=================================\n");
    printf("|  Data Pembayaran Cake Bakery  |\n");
    printf("=================================\n");
}
void tampilanroti()
{
    printf("==============================\n");
    printf("|   Data Roti Cake Bakery    |\n");
    printf("==============================\n");
}
void tampilandaftar()
{
    printf("=============================\n");
    printf("|  WELCOME TO CAKE BAKERY   |\n");
    printf("=============================\n");
    printf("|  1. Login                 |\n");
    printf("|  2. Registrasi            |\n");
    printf("=============================\n");
}
void tampilanlogin()
{
    printf("\n=============================\n");
    printf("|         Menu Login        |\n");
    printf("=============================\n");
}
void tampilanregis()
{
    printf("\n=============================\n");
    printf("|     Menu Registrasi       |\n");
    printf("=============================\n");
}
void tampilanmain()
{
    printf("\n========================================\n");
    printf("|  Menu Pilihan Toko Roti Cake Bakery  |\n");
    printf("========================================\n");
    printf("|  1. Create                           |\n");
    printf("|  2. Search                           |\n");
    printf("|  3. Update                           |\n");
    printf("|  4. Delete                           |\n");
    printf("========================================\n");
}
