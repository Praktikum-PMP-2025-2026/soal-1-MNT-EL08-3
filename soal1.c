/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 4
 *   Hari dan Tanggal    : Selasa, 6 Mei 2026
 *   Nama (NIM)          : Salman Santika Abdullah (13224084)
 *   Nama File           : soal2.c
 *   Deskripsi           : Membuat sistem yang dapat menghitung jumlah durasi antrian
 */

// C Program to demonstrate how to Implement a queue
#include <stdbool.h>
#include <stdio.h>

// 1. Mendefinisikan struktur Node 
struct Pasien {
    char kode[3];
    int id;
    int durasi;
    struct Pasien* next;
};

// Pointer global 
struct Pasien* head = NULL;

// Fungsi untuk menambahkan Pasien baru 
void tambahPasien(char* kode, int id, int durasi) {
    struct Pasien* nodeBaru = (struct Pasien*)malloc(sizeof(struct Pasien));
    strcpy(nodeBaru->kode, kode);
    nodeBaru->id = id;
    nodeBaru->durasi = durasi;
    nodeBaru->next = NULL;

    // Cek linked list masih kosong
    if (head == NULL) {
        head = nodeBaru;
    } else {
        struct Pasien* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nodeBaru;
    }
}

void hitungDurasi(int dur){
    if (head == NULL) {
        printf("\n Data  masih kosong\n");
        return;
    }
    struct Pasien* temp = head;
    struct Pasien* prev = NULL;
    int durasiTotal = temp->durasi;
}



int main (){
    int N;
    char inputKode[3];
    int inputId;
    int inputDurasi;
    scanf("%d", &N);

    for (int i = 0; i < 0; i++){
        tambahPasien(inputKode, inputId, inputDurasi);
    }
    //operasi menghitung durasi


    

    
}

// referensi
// https://www.geeksforgeeks.org/c/queue-in-c/
