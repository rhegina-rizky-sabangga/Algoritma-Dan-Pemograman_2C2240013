#include <iostream>
using namespace std;

// Fungsi mencari elemen maksimum dan minimum
void cariMaksMin(int matriks[10][10], int baris, int kolom, int &maks, int &min) {
    maks = matriks[0][0];
    min = matriks[0][0];

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (matriks[i][j] > maks) {
                maks = matriks[i][j];
            }
            if (matriks[i][j] < min) {
                min = matriks[i][j];
            }
        }
    }
}

int main() {
    int matriks[10][10];
    int baris, kolom;
    int maks, min;

    // Input ukuran matriks
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    // Input elemen matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriks[i][j];
        }
    }

    // Cari elemen maksimum dan minimum
    cariMaksMin(matriks, baris, kolom, maks, min);

    // Tampilkan hasil
    cout << "Elemen Maksimum: " << maks << endl;
    cout << "Elemen Minimum: " << min << endl;

    return 0;
}