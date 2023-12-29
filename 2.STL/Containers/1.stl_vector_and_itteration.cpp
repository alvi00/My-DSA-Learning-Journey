#include <bits/stdc++.h>
using namespace std;

// This is the first container I am learning
// This is vectors
// So you can ask why I need vectors as I have array
//  so the main reason is that arrays are constants
// You can not change the size of the array
// Where in vectors you can definetsly change the size of the vectors
// So it can work like dynamecally

void learn_vector()
{

    // This is how to deccare vector
    vector<int> alvi;

    // This is one way of insering value
    alvi.emplace_back(10);
    cout << alvi[0] << endl;
    // Another way is
    alvi.push_back(20);
    cout << alvi[1] << endl;

    // You can use pairs too
    vector<pair<int, int>> anas;
    anas.emplace_back(1, 2);
    anas.push_back({3, 4});
    cout << anas[1].first << endl;

    // You can also pre-define size
    // here there will be 5 places to insert values
    // So here all the 5 places will be initilized with 0
    vector<double> semx(5);

    // You can also pre-define size with predefied values too
    // Here all the 5 places are filled with 20
    vector<double> fahim(5, 20);

    // You can also copy vector to another vector too
    vector<int> v1(5);
    vector<int> v2(v1);

    // This part is for itterator
    vector<int> tambir;
    vector<int>::iterator it;
    tambir.emplace_back(10);
    tambir.emplace_back(20);
    tambir.emplace_back(30);

    it = tambir.begin();

    // This means the the itterator will point to the beging of the vector
    // This will work a pointer, so it will point to the address of the vector value

    cout << *it << endl;

    it = tambir.end();
    // This will point to the next adress of the last element
    //   so like it is {1,2,3} so it will point to the address after 3
    it--;
    cout << *it << endl;

    cout << tambir.back() << endl;
    // Here it will point to the last element of the vector
    // So like it is {1,2,3} so it will point to 3
    // remeber .back function returns a int or other things not a itterator

    // So here we can print the vectors in two ways
    for (int i = 0; i < 3; i++)
    {
        cout << tambir[i] << " ";
    }

    cout << endl;

    // Another way is using itterator

    for (vector<int>::iterator si = tambir.begin(); si != tambir.end(); si++)
    {
        cout << *si << " ";
    }

    cout << endl;

    // Another way is

    for (auto al = tambir.begin(); al != tambir.end(); al++)
    {
        cout << *al << " ";
    }
    cout << endl;

    // Another way is
    for (auto an : tambir)
    {

        cout << an << " ";
    }

    cout << endl;

    // We will do how to delete something in a vector
    vector<int> okita;
    cout << "Enter 8 values of the vector" << endl;

    for (int i = 0; i < 8; i++)
    {
        int val;
        cin >> val;
        okita.emplace_back(val);
    }

    cout << "All the values are" << endl;
    for (auto v : okita)
    {
        cout << v << " ";
    }

    cout << endl;

    // So suppose I wanna delete the 2nd element so
    okita.erase(okita.begin() + 1);
    cout << "After deleting 2nd element" << endl;
    for (auto v : okita)
    {
        cout << v << " ";
    }

    cout << endl;
    // So suppose I have to delete from a certain index to certain index
    cout << "Deleting from 2nd to 4th index" << endl;

    okita.erase(okita.begin() + 1, okita.begin() + 5);
    // So here what will happen is for the part okita.begin() + 1  it will point to the exact point and include the part
    //  And this part okita.begin() + 5 will point to index but for deletation it is not included
    // That means for the first part it will start deleting from that index
    // For the second part it will delete to the index right before which is mentioned

    for (auto v : okita)
    {
        cout << v << " ";
    }
    cout << endl;

    // Now we will use insert function

    okita.insert(okita.begin(), 10);
    // Here i am inserting to first index
    okita.insert(okita.begin() + 3, 200);
    // also can insert to a specific index
    okita.insert(okita.begin() + 4, 5, 100);
    // also can insert same element to a specific index
    cout << "After inserting elements" << endl;
    for (auto v : okita)
    {
        cout << v << " ";
    }

    cout << endl;

    vector<int> piaj;
    piaj.emplace_back(10);
    piaj.emplace_back(20);
    piaj.insert(piaj.begin(), okita.begin(), okita.begin() + 3);
    cout << "After inserting elements from okita to piaj" << endl;
    for (auto v : piaj)
    {
        cout << v << " ";
    }

    cout << endl;

    cout << "Size of the vector = " << piaj.size() << endl;
    // Prints the size of the vector;

    piaj.pop_back();
    // deletes the last element of the vector;

    piaj.swap(okita);
    // swaps the vectors;

    piaj.clear();
    // delets all elements of the vector

    cout << piaj.empty();
    // Tells if the vector is empty or not

    return;
}
int main()
{
    learn_vector();
    return 0;
}
