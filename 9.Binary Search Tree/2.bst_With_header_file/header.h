#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int a);
};

class BinaryTree
{
public:
    BinaryTree();
    ~BinaryTree();
    void insert(int value);
    void search(int value);
    void print();
    void deleteNode(int key);
    int lengthis();

private:
    Node* root;
    void insert(Node* &root, int value);
    void search(Node* root, int value);
    void print(Node* root);
    Node* deleteNode(Node* root, int key);
    int countNodes(Node* root);
    void makeEmpty(Node* &root);
    Node* findMin(Node* root);
};

#endif // HEADER_H_INCLUDED
