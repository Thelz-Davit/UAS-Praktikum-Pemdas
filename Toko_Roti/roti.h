#ifndef ROTI_H
#define ROTI_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
    //TO DO LIST
    //3. SISA DATA CRUD done? cekin lagi tolong
    //4. Tampilan (bagusin tampilannya)
    //5. Create directory buat nyimpen list data (biar ga manual)
    //6. Konfirmasi delete

    
    typedef struct{
        char kdRoti[100];
        char namaRoti[100];
        int harga;
        char jenisRoti[100];
        int stok;
    }roti;

    typedef struct {
        char kodeAdmin[10];
        char name[10];
        char username[10];
        char password[10];
    }user;
     
    typedef struct{
        char kodeK[20];
        char namaK[20];
        char gender[10];
        char alamatK[20];
        char notel[100];
        char ttl[100];
    }karyawan;

    typedef struct {
        char kodeP[20];
        char namaP[20];
        char alamatP[20];
        char notel[100];
        char ttl[100];
    }pelanggan;

    typedef struct {
        char menupesanan[20];
        char jenispembayaran[20];
        char id[100];
        int jumlah;
        int total;
    }pembayaran;

    roti sRoti;
    user sUser;
    karyawan sKry;
    pelanggan sPlg;
    pembayaran sByr;
    
    void Create();
    void Read();
    void Update();
    void Delete();
    void Search();
    int CheckUser();

    char namaFile[100];
    char lanjut='y';char tUser='y';
    char dir[100] = "Roties/";
    char use[100] = "Admin/";
    char kry[100] = "Karyawan/";
    char plgn[100] = "Pelanggan/";
    char pay[100] = "Pembayaran/";
    char passMasuk[100];
    FILE *fp;
    
#endif