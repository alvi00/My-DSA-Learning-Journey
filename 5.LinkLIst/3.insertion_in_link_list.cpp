#include <bits/stdc++.h>
using namespace std;

// Define a structure Node for linked list
struct Node
{
public:
    int data;       // Data stored in the node
    Node *next;     // Pointer to the next node in the linked list

public:
    // Constructor to initialize a node with given data and next pointer
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

// Function to create a linked list from a vector
Node *alvi(vector<int> &arr)
{
    Node *head = new Node(arr[0], nullptr); // Initialize head with first element of arr
    Node *mover = head;
    // Traverse the vector to create linked list nodes
    for (size_t i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr); // Create a new node with data from arr
        mover->next = temp; // Link the current node with the new node
        mover = temp; // Move to the newly created node
    }
    return head; // Return the head of the linked list
}

// Function to print the elements of a linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " "; // Print the data of the current node
        temp = temp->next; // Move temp to the next node
    }
}

// Function to insert a node at the beginning of a linked list
Node *insert_head(Node *head, int val)
{
    Node *temp = new Node(val, head); // Create a new node with given data and next pointer to current head
    return temp; // Return the new node as the head of the linked list
}

// Function to insert a node at the end of a linked list
Node *insert_last(Node *head, int val)
{
    if (head == nullptr)
    {
        return new Node(val, nullptr); // If list is empty, create a new node as head
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next; // Traverse to the last node of the linked list
    }
    Node *newnode = new Node(val, nullptr); // Create a new node with given data and next pointer as nullptr
    temp->next = newnode; // Link the last node to the new node
    return head; // Return the head of the linked list
}

// Function to insert a node at the k-th position in a linked list
Node *insert_kth(Node *head, int k, int val)
{
    if (head == nullptr) // If list is empty
    {
        if (k == 1)
        {
            Node *temp = new Node(val, head); // Create a new node as head
            return temp; // Return the new node as the head of the linked list
        }
    }
    if (k == 1) // If position is 1 (insert at the beginning)
    {
        Node *temp = new Node(val, head); // Create a new node with given data and next pointer to current head
        return temp; // Return the new node as the head of the linked list
    }

    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        count++;
        if (count == (k - 1)) // Find the node at position (k - 1)
        {
            Node *newnode = new Node(val, temp->next); // Create a new node with given data and next pointer
            temp->next = newnode; // Link the new node to the next node of temp
            break;
        }
        temp = temp->next; // Move to the next node
    }
    return head; // Return the head of the linked list
}

// Function to insert a node before the node with a given value in a linked list
Node *insert_before_value(Node *head, int val4, int val)
{
    if (head == nullptr) // If list is empty
    {
        return nullptr; // Return NULL
    }
    if (head->data == val4) // If the value to insert before is found at the head
    {
        Node *temp = new Node(val, head); // Create a new node as head
        return temp; // Return the new node as the head of the linked list
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        if (temp->next->data == val4) // If the value to insert before is found
        {
            Node *newnode = new Node(val, temp->next); // Create a new node with given data and next pointer
            temp->next = newnode; // Link the new node to the next node of temp
            break;
        }
        temp = temp->next; // Move to the next node
    }
    return head; // Return the head of the linked list
}

// Main function
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5}; // Initialize a vector with values
    Node *head = alvi(arr); // Create a linked list from the vector
    int val = 10;
    head = insert_head(head, val); // Insert a node at the beginning of the linked list
    cout << "Inserting to the head" << endl;
    print(head); // Print the linked list
    cout << endl;
    int val1 = 20;
    head = insert_last(head, val1); // Insert a node at the end of the linked list
    cout << "Inserting to the end" << endl;
    print(head); // Print the linked list
    cout << endl;
    int k = 3;
    int val3 = 12;
    head = insert_kth(head, k, val3); // Insert a node at the k-th position in the linked list
    cout << "Inserting Kth element" << endl;
    print(head); // Print the linked list
    int k1 = 4;
    int val5 = 40;
    head = insert_before_value(head, k1, val5); // Insert a node before a value in the linked list
    cout << "Inserting before element by giving value" << endl;
    print(head); // Print the linked list
}
