#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<bits/stdc++.h>
const int max_item=100;
using namespace std;
class alvi{
private:
    string anas;
    char arr[100];
    int top;
public:
    alvi(string);
    bool isbalanced();
    bool isempty();
    bool isfull();
    void push(char);
    void pop();
    char top_el();
};

#endif // HEADER_H_INCLUDED
