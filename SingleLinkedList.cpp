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
