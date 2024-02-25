#include <bits/stdc++.h>
using namespace std;

// Define a structure 'node' to represent elements of a linked list
struct node
{
public:
    int data;     // Data of the node
    node *next;   // Pointer to the next node in the linked list

public:
    // Constructor to initialize a node with given data and next pointer
    node(int data, node *next)
    {
        this->data = data;
        this->next = next;
    }
};

// Function to convert an array to a linked list
node *convertArr2Linklist(vector<int>& arr)
{
    // Create the head of the linked list with the first element of the array
    node *head = new node(arr[0], nullptr);
    // Initialize a pointer 'mover' to traverse the linked list
    node *mover = head;
    // Iterate over the array starting from the second element
    for(size_t i = 1; i < arr.size(); i++)
    {
        // Create a new node with the current element of the array
        node *temp = new node(arr[i], nullptr);
        // Connect the current node to the next node in the linked list
        mover->next = temp;
        // Move the 'mover' pointer to the newly created node
        mover = temp;
    }
    // Return the head of the linked list
    return head;
}

// Main function
int main()
{
    // Declare and initialize an array
    vector<int> arr = {2, 3, 4, 5};
    // Convert the array to a linked list and get the head of the linked list
    node *head = convertArr2Linklist(arr);
    // Print the memory address of the head of the linked list
    cout << head;
    // Return 0 to indicate successful execution
    return 0;
}
