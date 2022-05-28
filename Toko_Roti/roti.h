#ifndef ROTI_H
#define ROTI_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

    struct roti
    {
        char kdRoti[10];
        char namaRoti[20];
        int harga;
        char jenisRoti[20];
        int stok;
    }*pRoti;

    struct user{
        char kodeAdmin[20];
        char name[20];
        char username[10];
        char password[10];
    }*pUser;
    struct karyawan{
        char kodeK[20];
        char namaK[20];
        char gender[10];
        char alamtK[20];
        int notelp;
        int ttl;
    }*pKry;
    struct pelanggan{
        char kodeP[20];
        char nama[20];
        char alamt[20];
        int notel;
        char ttl[10];
    }*pPlg;

    struct pembayaran{
        char menupesanan[20];
        char jenispembayaran[20];
        int id;
        int jumlah;
        int total;
    }*pNota;
    // int Create(struct apapunh);
    void Read();
    void Update(char input[]);
    void Delete();
    void Sort();
    void Search();

#endif;