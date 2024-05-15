#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int a)
    {
        data=a;
        left=nullptr;
        right=nullptr;
    }

    void insert(int);
    void search(Node *root,int);
    void print(Node *root);

    Node* deleteNode(Node* root, int key);
    int lengthis(Node *root);

};


#endif // HEADER_H_INCLUDED
