#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    int kehadiran[14];
    mahasiswa* next;
};

typedef mahasiswa* simpul;

void Sisip(simpul& L, string nama);
void TambahKehadiran(simpul& L, string nama, int pertemuan);
void Cetak(simpul L);
