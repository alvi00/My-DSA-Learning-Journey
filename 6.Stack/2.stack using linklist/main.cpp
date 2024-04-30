#include <iostream>
#include "header.h"


using namespace std;

int main()
{
    alvi a1;
    a1.push(10);
    a1.push(20);
    a1.push(30);
    a1.push(40);
    a1.push(50);
    a1.pop();
    a1.pop();
    a1.print();

    return 0;
}
