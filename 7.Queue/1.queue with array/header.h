#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class fullqueue{};
class emptyqueue{};
const int max_item=5;
class alvi{
private:
    int count;
    int rear;
    int front;
    int arr[max_item];
public:
    alvi();
    bool isfull();
    bool isempty();
    void enqueue(int);
    void dequeue();
    int top();
    void print();

};

#endif // HEADER_H_INCLUDED
