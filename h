#ifndef BIN5_H
#define BIN5_H

#include <iostream>
#include <unordered_set>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};


//Проверка ввода
bool check(string n);

// Вывод дерева
void printTree(Node* root, int space = 0, const int COUNT = 5);

// Преобразование в список 
void convert(Node* root, Node*& prev, Node*& head);

// Вывод элементов спискa
void printList(Node* head);

// Функция вставки в дерево
Node* insertNode(Node* root, int value);

// обход ПЛК 
void reverseInOrder(Node* root);

#endif
