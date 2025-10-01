#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> n;

    // Alokasi array dinamis
    int* arr = new int[n];

    // Input elemen array
    cout << "Masukkan " << n << " elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);  // pointer arithmetic, bukan arr[i]
    }

    // Menampilkan array sebelum dibalik
    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << end
