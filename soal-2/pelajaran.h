#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <iostream>
#include <string>
using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

// function create_pelajaran(namaMapel : string, kodeMapel : string) -> pelajaran
pelajaran create_pelajaran(string namaMapel, string kodeMapel);

// procedure tampil_pelajaran(input pel : pelajaran)
void tampil_pelajaran(pelajaran pel);

#endif