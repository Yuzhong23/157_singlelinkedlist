#include <iostream>
using namespace std;

struct Node {
    int noMhs;
    string name;
    Node* next;
};

Node* START = NULL;

void addNode() {
    int nim;
    string nama;
    Node* nodeBaru = new Node();
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan Nama: ";
    cin >> nama;
    nodeBaru->noMhs = nim;
    nodeBaru->name = nama;
}

bool searchNode(int nim, Node* current, Node* previous) {

}

bool deleteNode(int nim) {

}

bool listEmpty() {

}


void traverse() {

}

void searchData() {

}

int main() {
	
}