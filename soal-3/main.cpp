#include "array.h"

int main() {
    // 2 buah array integer 2D berukuran 3x3
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // 2 buah pointer integer
    int *p1 = &A[0][0];   // menunjuk 1
    int *p2 = &B[0][0];   // menunjuk 9

    cout << "=== Array A ===" << endl;
    tampilArray(A);
    cout << "\n=== Array B ===" << endl;
    tampilArray(B);

    // tukar elemen pada posisi tertentu
    int baris = 1, kolom = 2;
    tukarPosisi(A, B, baris, kolom);

    cout << "\n=== Setelah tukar elemen pada posisi ("
         << baris << "," << kolom << ") ===" << endl;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "\nArray B:" << endl;
    tampilArray(B);

    // tukar isi variabel yang ditunjuk pointer
    cout << "\nSebelum tukar nilai pointer:" << endl;
    cout << "p1 menunjuk ke A[0][0] = " << *p1 << endl;
    cout << "p2 menunjuk ke B[0][0] = " << *p2 << endl;

    tukarPointer(p1, p2);

    cout << "\nSetelah tukar nilai pointer:" << endl;
    cout << "p1 menunjuk ke A[0][0] = " << *p1 << endl;
    cout << "p2 menunjuk ke B[0][0] = " << *p2 << endl;

    return 0;
}