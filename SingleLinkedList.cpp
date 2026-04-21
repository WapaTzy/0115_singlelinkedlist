#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    long long noMhs;
    Node *next;
};

class LinkedList {
    Node *START;

public:
    LinkedList() {
        START = NULL;
    }

    void addNode() {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa : ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

       