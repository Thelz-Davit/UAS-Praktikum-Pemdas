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
    };

    struct user{
    char username[10];
    char password[10];
    }*pUser;    
    // int Create(struct apapun *h);
    void Read();
    void Update(char input[]);
    void Delete();
    void Sort();
    void Search();

    
    
#endif