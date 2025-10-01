#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta pengguna memasukkan ukuran array
    cout << "Input n = ";
    cin >> n;

    // Alokasi array secara dinamis
    int* arr = new int[n];

    // Meminta pengguna mengisi elemen array
    cout << "Masukkan elemen: ";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);  // pointer aritmatika
    }

    // Menampilkan array sebelum dibalik
    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // Membalik array menggunakan pointer
    int* start = arr;
    int* end = arr + n - 1;
    while (start < end) {
        // Tukar elemen yang ditunjuk oleh start dan end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Menggeser pointer
        ++start;
        --end;
    }

    // Menampilkan array sesudah dibalik
    cout << "Array sesudah dibalik: ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // Hapus alokasi dinamis
    delete[] arr;

    return 0;
}
