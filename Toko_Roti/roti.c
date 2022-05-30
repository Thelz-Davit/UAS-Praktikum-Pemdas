#include "roti.h"

void Create(){
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
        printf("Data telah dimasukan!");
    }
    strcpy(dir,"Roties/");
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