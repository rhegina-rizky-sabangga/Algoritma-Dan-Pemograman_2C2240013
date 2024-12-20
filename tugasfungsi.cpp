#include <iostream>

// Prosedur untuk menampilkan menu
void tampilanMenu() {
    std::cout << "Sistem Penghitung Nilai Akhir Mahasiswa Ikopin University" << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "1. Tugas (30%)" << std::endl;
    std::cout << "2. UTS (30%)" << std::endl;
    std::cout << "3. UAS (40%)" << std::endl;
}

// Fungsi untuk menghitung nilai akhir
double hitungNilaiAkhir(double nilaiTugas, double nilaiUTS, double nilaiUAS) {
    const double bobotTugas = 0.3;
    const double bobotUTS = 0.3;
    const double bobotUAS = 0.4;

    return (nilaiTugas * bobotTugas) + (nilaiUTS * bobotUTS) + (nilaiUAS * bobotUAS);
}

int main() {
    double nilaiTugas, nilaiUTS, nilaiUAS;

    tampilanMenu();

    std::cout << "Masukkan nilai Tugas: ";
    std::cin >> nilaiTugas;
    std::cout << "Masukkan nilai UTS: ";
    std::cin >> nilaiUTS;
    std::cout << "Masukkan nilai UAS: ";
    std::cin >> nilaiUAS;

    double nilaiAkhir = hitungNilaiAkhir(nilaiTugas, nilaiUTS, nilaiUAS);

    std::cout << "Nilai Akhir: " << nilaiAkhir << std::endl;

    return 0;
}
