#include "mahasiswa.h"

int main() {
    Mahasiswa mhs[10];
    int n;

    do {
        cout << "Masukkan jumlah mahasiswa (1-10): ";
        cin >> n;
    } while (n < 1 || n > 10);
    cin.ignore(1000, '\n');

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        inputMahasiswa(mhs[i]);
    }

    cout << "\n=== Data Mahasiswa ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        tampilMahasiswa(mhs[i]);
    }

    return 0;
}