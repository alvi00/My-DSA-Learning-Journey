#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class fullstack{};
class emptystack{};
const int max_item=5;
class stack_alvi{
private:
    int top;
    int arr[max_item];
public:
    stack_alvi();
    int push(int);
    void pop();
    int top_val();
    int length();
    void print();
    bool isfull();
    bool isempty();
};

#endif // HEADER_H_INCLUDED
