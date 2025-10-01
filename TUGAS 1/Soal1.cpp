#include <iostream>
using namespace std;

void hitungJumlahGanjil(int* x, int y) {
    *x = 0; 
    for (int i = 1; i <= y; i += 2) {
        *x += i;
    }
}

int main() {
    int y;
    int hasil;
    cout << "Masukkan nilai y: ";
    cin >> y;

    hitungJumlahGanjil(&hasil, y);
    cout << "Jumlah bilangan ganjil dari 1 sampai " << y << " adalah: " << hasil << endl;

    return 0;
}
