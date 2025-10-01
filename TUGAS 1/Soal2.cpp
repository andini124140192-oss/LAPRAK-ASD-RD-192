#include <iostream>
using namespace std;

// Fungsi untuk menghitung nilai *x dan *z
void hitung(int* x, int y, long long* z) {
    *x = 0;     // Nilai awal x
    *z = 1;     // Nilai awal z

    for (int n = 1; n <= y; n++) {
        *x += n * n;              // Penjumlahan kuadrat
        *z *= (2 * n - 1);        // Perkalian bilangan ganjil
    }
}

int main() {
    int x = 0;
    int y = 4;
    long long z = 1;  // menggunakan long long karena hasil perkalian bisa besar

    // Panggil fungsi hitung dengan pointer
    hitung(&x, y, &z);

    // Output hasil
    cout << "Hasil perhitungan dengan y = " << y << ":\n";
    cout << "*x (jumlah kuadrat 1^2 hingga " << y << "^2) = " << x << endl;
    cout << "*z (perkalian bilangan ganjil hingga (2*" << y << "-1)) = " << z << endl;

    return 0;
}
