#include <bits/stdc++.h> // Include the necessary standard library header

using namespace std; // Use the standard namespace

class Node // Define a class named Node for representing tree nodes
{
public:
    int data; // Integer data field representing the value of the node
    Node *left; // Pointer to the left child node
    Node *right; // Pointer to the right child node

    Node(int a) // Constructor for initializing the Node object with a given value
    {
        data = a; // Assign the given value to the data field
        left = nullptr; // Initialize the left child pointer as nullptr
        right = nullptr; // Initialize the right child pointer as nullptr
    }

    void search(Node *root, int val) // Method to search for a value in the binary search tree
    {
        while (root != nullptr && root->data != val) // Loop until either the root is nullptr or the value is found
        {
            if (root->data > val) // If the value to search for is less than the current node's value
            {
                root = root->left; // Move to the left child
            }
            else // If the value to search for is greater than or equal to the current node's value
            {
                root = root->right; // Move to the right child
            }
        }
        if (root == nullptr) // If the root is nullptr, the value was not found
        {
            cout << "Didn't find"<<endl; // Print a message indicating that the value was not found
        }
        else // If the root is not nullptr, the value was found
        {
            cout << "Yessir"; // Print a message indicating that the value was found
        }
    }
};

int main() // Main function
{
    Node *root = new Node(8); // Create the root node with a value of 8
    root->left = new Node(5); // Create the left child node with a value of 5
    root->right = new Node(12); // Create the right child node with a value of 12
    root->left->left = new Node(4); // Create the left child of the left child node with a value of 4
    root->left->right = new Node(7); // Create the right child of the left child node with a value of 7
    root->left->right->left = new Node(6); // Create the left child of the right child of the left child node with a value of 6
    root->right->left = new Node(10); // Create the left child of the right child node with a value of 10
    root->right->right = new Node(14); // Create the right child of the right child node with a value of 14
    root->right->right->left = new Node(13); // Create the left child of the right child of the right child node with a value of 13
    root->search(root, 51); // Call the search method to search for the value 51 in the tree
    root->search(root, 5); // Call the search method to search for the value 5 in the tree
} // End of main function
