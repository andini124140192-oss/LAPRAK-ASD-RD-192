#include <iostream>
#include <string>

using namespace std;


struct Node {
    string nama;
    float nilai;
    Node* next;
};


Node* head = nullptr;


void tambahData(string nama, float nilai) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->nilai = nilai;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "Data siswa berhasil ditambahkan!\n";
}


void tampilkanData() {
    if (head == nullptr) {
        cout << "Belum ada data siswa.\n";
        return;
    }

    Node* temp = head;
    cout << "\nDaftar Nilai Siswa:\n";
    cout << "----------------------\n";
    while (temp != nullptr) {
        cout << "Nama : " << temp->nama << endl;
        cout << "Nilai: " << temp->nilai << endl;
        cout << "----------------------\n";
        temp = temp->next;
    }
}


void hapusSemuaData() {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int pilihan;
    string nama;
    float nilai;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Data Siswa\n";
        cout << "2. Tampilkan Semua Data\n";
        cout << "3. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;
        cin.ignore(); 

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama siswa: ";
                getline(cin, nama);
                cout << "Masukkan nilai siswa: ";
                cin >> nilai;
                tambahData(nama, nilai);
                break;
            case 2:
                tampilkanData();
                break;
            case 3:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi.\n";
        }

    } while (pilihan != 3);

    hapusSemuaData(); 
    return 0;
}
