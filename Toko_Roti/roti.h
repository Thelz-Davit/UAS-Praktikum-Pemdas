#ifndef ROTI_H
#define ROTI_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
    //TO DO LIST
    //1. LOGIN BENERIN LAGI
    //2. NOTA
    //3. SISA DATA CRUD
    //4. Tampilan
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
        int notelp;
        int ttl;
    }karyawan;

    typedef struct {
        char kodeP[20];
        char namaP[20];
        char alamatP[20];
        int notel;
        int ttl;
    }pelanggan;

    typedef struct {
        char menupesanan[20];
        char jenispembayaran[20];
        int id;
        int jumlah;
        int total;
    }pembayaran;

    roti sRoti;
    user sUser;
    karyawan sKry;
    pelanggan sPlg;
    pembayaran sByr;
    
    void CreateRoti();
    void Read();
    void Update();
    void Delete();
    void Search();

    char namaFile[100];
    char lanjut='y';
    // char buffer[0] = '\0';
    char dir[100] = "Roties/";
    FILE *fp;
    
#endif