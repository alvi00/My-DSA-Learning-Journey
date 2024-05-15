#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    Node *root=new Node(8);
    root->insert(10);
    root->insert(20);
    root->insert(30);
    root->search(root, 8); // Call the search method to search for the value 51 in the tree
    root->search(root, 5); // Call the search method to searc
    root->print(root);
    root=root->deleteNode(root,10);
    cout<<endl;
    root->print(root);
    int a=root->lengthis(root);
    cout<<a;
    return 0;
}
