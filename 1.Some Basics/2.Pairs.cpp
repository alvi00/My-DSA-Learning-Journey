#include <bits/stdc++.h>
using namespace std;

// I am goona start to learn stl to here it is
// Basically stl is a very large topic at
// so it is of 4 parts they are
// 1.ALGORITHM
// 2.Containers
// 3.Functions
// 4.Itterations
// At first I am gonna learn Containers then Functions and then I will learn other things
// Daddy chill

// This is pairs in cpp which is a part of utility library

void learn_pairs()
{
    // Here using pairs you can use a single interger to store two values

    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // This is nested pairs to store more
    pair<int, pair<double, double>> a = {1, {2, 3}};
    cout << a.first << " " << a.second.first << " " << a.second.second << endl;

    // So you can nest as much as you want
    pair<int, pair<int, pair<int, int>>> semx = {1, {2, {3, 4}}};
    cout << semx.second.second.second << endl;

    // So you can also use pairs as array too
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[2].second << endl;

    // So you can also use nested paires in arrays
    pair<int, pair<int, int>> alvi[] = {{1, {2, 3}}, {5, {6, 7}}};
    cout << alvi[1].second.first << endl;

    // This is how you can take input from user
    pair<int, int> anas;
    cin >> anas.first;
    cout << anas.first << endl;
    // This is how you can take input from user in array
    pair<int, int> okita[2];
    cin >> okita[0].first;
    cout << okita[0].first;
}

int main()
{
    learn_pairs();
    return 0;
}
