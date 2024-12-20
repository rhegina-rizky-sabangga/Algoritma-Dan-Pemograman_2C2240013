#include <iostream>
using namespace std;

// Fungsi untuk menghitung nilai f(x)
int f(int x) {
    return x * x - 2 * x + 5;
}

int main() {
    int A, B;

    // Meminta input dari pengguna
    cout << "Masukkan A: ";
    cin >> A;
    cout << "Masukkan B: ";
    cin >> B;

    // Menampilkan nilai f(x) untuk semua x dari A hingga B
    for (int x = A; x <= B; x++) {
        cout << "f(" << x << ") = " << f(x) << endl;
    }

    return 0;
}
