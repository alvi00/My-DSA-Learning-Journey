#include <bits/stdc++.h>
using namespace std;

// This is the second container I am learning and it is list
// This is fully similar to vector
// But the only advantage is you gotta do front operations too
void list_learn()
{

    // Create a list 'anas' with 5 elements, each initialized to 10
    list<int> anas(5, 10);

    // Add 20 to the front of the list
    anas.emplace_front(20);

    // Add 30 to the back of the list
    anas.emplace_back(30);

    // Declare iterator 'it' for inserting an element
    list<int>::iterator it = anas.begin();

    // Advance 'it' to the third position
    advance(it, 2);

    // Insert 100 at the third position
    anas.insert(it, 100);

    // Reset 'it' to the beginning
    it = anas.begin();

    // Advance 'it' to the third position
    advance(it, 2);

    // Erase the element at the third position
    anas.erase(it);

    // Reset 'it' to the beginning and declare 'et' for erasing a range
    it = anas.begin();
    list<int>::iterator et = anas.end();

    // Advance 'it' to the third position and 'et' to an arbitrary position ahead
    advance(it, 2);
    advance(et, 6);

    // Erase elements from the third position to 'et' (not inclusive)
    anas.erase(it, et);

    // Print the remaining elements in the list
    for (list<int>::iterator i = anas.begin(); i != anas.end(); i++)
    {
        cout << *i << endl;
    }

    // Create a new list 'alvi' as a copy of 'anas'
    list<int> alvi(anas);

    // Output the content of 'alvi'
    for (list<int>::iterator i = alvi.begin(); i != alvi.end(); i++)
    {
        cout << *i << endl;
    }

    // Create a list 'okita' with 10 elements, each initialized to 1
    list<int> okita(10, 1);
    list<int>::iterator xt;

    // Advance 'xt' to the third position
    xt = okita.begin();
    advance(xt, 2);

    // Insert 55 at the third position
    okita.insert(xt, 55);

    // Inserting 5 copies of 100 at position 4
    it = okita.begin();
    advance(it, 4);
    okita.insert(it, 5, 100);

    // Inserting 5 copies of 100 at position 4
    it = okita.begin();
    advance(it, 4);
    okita.insert(it, 5, 100);
    // Print the elements of 'okita'
    for (auto i : okita)
    {
        cout << i;
    }

    // Remove the last element
    okita.pop_back();
    // Remove the first element
    okita.pop_front();

    // Swap the content of 'okita' with 'anas'
    okita.swap(anas);

    // Clear all elements from 'okita'
    okita.clear();

    // Output the size of 'okita' (should be 0 after clearing)
    cout << "the size is " << okita.size();

}
int main()
{

    list_learn();
    return 0;
}
