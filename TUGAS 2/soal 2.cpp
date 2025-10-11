#include <iostream>
using namespace std;

struct Node {
    int info;
    Node* next;
};

struct List {
    Node* first;
};

// untuk mengecek apakah list kosong
bool IsEmpty(List L) {
    return L.first == nullptr;
}


void InsertFirst(List &L, int x) {
    Node* newNode = new Node;
    newNode->info = x;
    newNode->next = L.first;
    L.first = newNode;
}


void InsertAfter(Node* prevNode, int x) {
    if (prevNode == nullptr) return;
    Node* newNode = new Node;
    newNode->info = x;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}


void InsertSorted(List &L, int x) {
    if (IsEmpty(L) || L.first->info > x) {
        InsertFirst(L, x);
    } else {
        Node* temp = L.first;
        while (temp->next != nullptr && temp->next->info < x) {
            temp = temp->next;
        }
        InsertAfter(temp, x);
    }
}


void PrintList(List L) {
    Node* temp = L.first;
    while (temp != nullptr) {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    List L;
    L.first = nullptr;

    InsertSorted(L, 5);
    InsertSorted(L, 2);
    InsertSorted(L, 8);
    InsertSorted(L, 3);

    cout << "Isi list terurut: ";
    PrintList(L);
    return 0;
}
