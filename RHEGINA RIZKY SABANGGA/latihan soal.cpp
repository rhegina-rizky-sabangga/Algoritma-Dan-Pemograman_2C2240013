int main() {
    int matriks[10][10];
    int baris, kolom;

    // Input ukuran matriks
    std::cout << "Masukkan jumlah baris: ";
    std::cin >> baris;
    std::cout << "Masukkan jumlah kolom: ";
    std::cin >> kolom;

    // Input elemen matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            std::cout << "Masukkan elemen [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matriks[i][j];
        }
    }

    // Hitung jumlah elemen
    int jumlahElemen = hitungElemen(matriks, baris, kolom);

    // Tampilkan hasil
    std::cout << "Jumlah elemen dalam matriks: " << jumlahElemen << std::endl;

    return 0;
}