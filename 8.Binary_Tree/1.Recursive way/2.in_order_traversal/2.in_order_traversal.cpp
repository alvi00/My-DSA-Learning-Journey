#include<bits/stdc++.h> // Include necessary header file for standard library utilities

using namespace std; // Using the standard namespace for convenience

class Node { // Definition of the Node class
public:
    int data; // Data stored in the node
    Node *left; // Pointer to the left child node
    Node *right; // Pointer to the right child node

    // Constructor to initialize a node with given data
    Node(int a) {
        data = a; // Assign the data
        left = nullptr; // Initialize left child pointer to null
        right = nullptr; // Initialize right child pointer to null
    }

    // Function to perform preorder traversal recursively
    void alvi(Node *a) {
        if (a == nullptr) { // Base case: if node is null, return
            return;
        }
        alvi(a->left); // Recursively traverse left subtree
        cout << a->data << endl; // Print data of the current node
        alvi(a->right); // Recursively traverse right subtree
    }
};

int main() { // Main function where execution begins
    // Create a binary tree with given structure
    Node* anas = new Node(10); // Create root node with data 10
    anas->left = new Node(20); // Create left child node with data 20
    anas->right = new Node(30); // Create right child node with data 30
    anas->left->left = new Node(40); // Create left child of left child node with data 40
    anas->left->right = new Node(50); // Create right child of left child node with data 50

    // Print the tree using preorder traversal (alvi function)
    anas->alvi(anas); // Call the alvi function on the root node to perform preorder traversal

    // Remember to delete dynamically allocated memory to avoid memory leaks
    delete anas->left->right; // Delete right child of left child node
    delete anas->left->left; // Delete left child of left child node
    delete anas->right; // Delete right child node
    delete anas; // Delete root node

    return 0; // Return 0 to indicate successful completion of program
}
