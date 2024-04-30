#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class fullstack{};
class emptystack{};
class Node{
    public:
    Node *next;
    int data;
    Node(int);
};
class alvi{
private:
    Node *top;

public:
    public:
    alvi();
    ~alvi();
    bool isfull();
    bool isempty();
    void  push(int);
    void pop();
    int top_el();
    void print();
};

#endif // HEADER_H_INCLUDED
