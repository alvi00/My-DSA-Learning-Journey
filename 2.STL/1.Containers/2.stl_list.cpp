#include <bits/stdc++.h>
using namespace std;

// This is the second container I am learning and it is list
// This is fully similar to vector
// But the only advantage is you gotta do front operations too
void list_learn()
{

    list<int> alvi;
    alvi.emplace_back(10);

    alvi.emplace_front(20);
    //You can use this other wise everything is same to vectors
    
    list<int>::iterator i;
    i = alvi.begin();
    cout << *i;

        list<int>anas(5,10);
    anas.emplace_front(20);
    anas.emplace_back(30);

    list<int>::iterator it=anas.begin();
    advance(it,2);
    anas.insert(it,100);

}
int main()
{

    list_learn();
    return 0;
}
