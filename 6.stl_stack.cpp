#include <bits/stdc++.h>
using namespace std;

void learn_Stack()
{

    stack<int>alvi;
    alvi.push(10);
    alvi.push(20);
    alvi.push(40);
    alvi.emplace(100);
    alvi.pop();
    cout<< alvi.top()<<endl;
    cout<< alvi.size()<<endl;
    cout<< alvi.empty()<<endl;

    while(!alvi.empty()){
        cout<<alvi.top()<<" ";
        alvi.pop();
    }
    cout<<endl;

}
int main()
{

    learn_Stack();
    return 0;
}
