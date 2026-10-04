#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

// menampilkan isi sebuah array integer 2D (3x3)
void tampilArray(int arr[3][3]);

// menukarkan isi dari 2 array integer 2D pada posisi (baris, kolom) tertentu
void tukarPosisi(int arr1[3][3], int arr2[3][3], int baris, int kolom);

// menukarkan isi dari 2 variabel yang ditunjuk oleh 2 buah pointer
void tukarPointer(int *p1, int *p2);

#endif