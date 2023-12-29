#include <bits/stdc++.h>
using namespace std;

// so difference between set and multiset is that
// set stores values in a sorted way and also with unique values
// but the multiset stores values in a sorted way
// but i doesnt store unique values
// for that reason u can store 1 two times means u can store similiar value miltiple times
void learn_multiset()
{
    multiset<int> alvi;
    alvi.insert(10);
    alvi.insert(1);
    alvi.insert(5);
    alvi.insert(1);

    alvi.erase(1);
    // now here what will happen is all the 1 will be deleted
    // but if you dont want this then
    //  Remove the first two occurrences of the value 1
    int valueToRemove = 1;
    auto it = alvi.begin();
    for (int i = 0; i < 2 && it != alvi.end(); ++i)
    {
        it = alvi.find(valueToRemove);
        if (it != alvi.end())
        {
            alvi.erase(it);
        }
    }
}
int main()
{
    learn_multiset();
    return 0;
}
