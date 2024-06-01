#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    BinaryTree tree;

    tree.insert(8);
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.search(8); // Call the search method to search for the value 8 in the tree
    tree.search(5); // Call the search method to search for the value 5 in the tree
    tree.print();
    cout << endl;
    tree.deleteNode(10);
    tree.print();
    cout << endl;
    int a = tree.lengthis();
    cout << a;
    return 0;
}
