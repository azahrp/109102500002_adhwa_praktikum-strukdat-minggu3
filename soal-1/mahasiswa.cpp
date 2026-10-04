#include "mahasiswa.h"

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3f * uts + 0.4f * uas + 0.3f * tugas;
}

void inputMahasiswa(Mahasiswa &m) {
    cout << "Nama        : ";
    getline(cin, m.nama);
    cout << "NIM         : ";
    getline(cin, m.nim);
    cout << "Nilai UTS   : ";
    cin >> m.uts;
    cout << "Nilai UAS   : ";
    cin >> m.uas;
    cout << "Nilai Tugas : ";
    cin >> m.tugas;
    cin.ignore(1000, '\n'); // buang enter agar getline berikutnya aman

    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

void tampilMahasiswa(Mahasiswa m) {
    cout << "Nama        : " << m.nama << endl;
    cout << "NIM         : " << m.nim << endl;
    cout << "UTS         : " << m.uts << endl;
    cout << "UAS         : " << m.uas << endl;
    cout << "Tugas       : " << m.tugas << endl;
    cout << "Nilai Akhir : " << m.nilaiAkhir << endl;
}