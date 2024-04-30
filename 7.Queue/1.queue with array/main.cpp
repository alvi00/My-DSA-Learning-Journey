#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    alvi a1;
    a1.enqueue(4);
    a1.enqueue(5);
    a1.enqueue(6);
    a1.enqueue(7);
    a1.enqueue(8);
    a1.dequeue();
    int a=a1.top();
    cout<<a<<endl;
        a1.print();
}
