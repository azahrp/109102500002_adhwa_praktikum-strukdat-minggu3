#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// FUNGSI: nilai akhir = 0.3*uts + 0.4*uas + 0.3*tugas
float hitungNilaiAkhir(float uts, float uas, float tugas);

void inputMahasiswa(Mahasiswa &m);
void tampilMahasiswa(Mahasiswa m);

#endif