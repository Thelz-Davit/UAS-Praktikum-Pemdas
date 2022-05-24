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
        char jenisRoti[10];
        int stok;
    }*pRoti;

    struct user{
        char kodeAdmin[10];
        char username[10];
        char password[10];
        char name[10];
    }*pUser;    

    void Create();
    void Read();
    void Update(char input[]);
    void Delete();
    void Sort();
    void Search();

    
    
#endif