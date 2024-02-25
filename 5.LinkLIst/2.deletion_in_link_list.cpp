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

// Function to delete the head node of a linked list
Node *delete_head(Node *head)
{
    // Check if the linked list is empty
    if (head == NULL)
    {
        return head; // Return NULL if list is empty
    }
    Node *temp = head;
    head = head->next; // Move head to the next node
    delete temp; // Delete the original head node
    return head; // Return the updated head
}

// Function to delete the tail node of a linked list
Node *delete_tail(Node *head)
{
    Node *temp = head;
    // Check if the linked list has one or zero nodes
    if (temp->next == nullptr || temp == nullptr)
    {
        return nullptr; // Return NULL if list has zero or one nodes
    }
    // Traverse the list until the second last node
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next; // Delete the last node
    temp->next = nullptr; // Set the next of second last node to NULL
    return head; // Return the head of the updated list
}

// Function to delete the kth node of a linked list
Node *delete_k(Node *head, int k)
{
    // Check if the linked list is empty
    if (head == nullptr)
    {
        return head; // Return NULL if list is empty
    }
    // Check if k is 1 (deleting the head node)
    if (k == 1)
    {
        Node *temp = head;
        head = temp->next; // Move head to the next node
        delete temp; // Delete the original head node
        return head; // Return the updated head
    }
    int count = 1;
    Node *temp = head;
    Node *prev = nullptr;
    // Traverse the list until kth node is found
    while (temp != nullptr)
    {
        if (count == k)
        {
            prev->next = prev->next->next; // Link previous node to next node
            delete temp; // Delete the kth node
            break;
        }
        prev = temp; // Move prev to the current node
        temp = temp->next; // Move temp to the next node
        count++; // Increment count
    }
    return head; // Return the head of the updated list
}

// Function to delete the first occurrence of an element from a linked list
Node *delete_el(Node *head, int el)
{
    // Check if the linked list is empty
    if (head == nullptr)
    {
        return head; // Return NULL if list is empty
    }
    Node *temp = head;
    // Check if the first node contains the element to be deleted
    if (temp->data == el)
    {
        head = head->next; // Move head to the next node
        delete temp; // Delete the original head node
        return head; // Return the updated head
    }
    Node *prev = nullptr;
    // Traverse the list until the element is found
    while (temp != nullptr)
    {
        if (temp->data == el)
        {
            prev->next = prev->next->next; // Link previous node to next node
            delete temp; // Delete the node containing the element
            break;
        }
        prev = temp; // Move prev to the current node
        temp = temp->next; // Move temp to the next node
    }
    return head; // Return the head of the updated list
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

// Main function
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5}; // Define a vector of integers
    Node *head = alvi(arr); // Create a linked list from the vector
    cout << "The main Link List "; // Print a message indicating the main linked list
    print(head); // Print the elements of the main linked list
    cout << endl;
    head = delete_head(head); // Delete the head node of the linked list
    cout << "After deleting head "; // Print a message indicating deletion of head
    print(head); // Print the elements of the linked list after deletion
    cout << endl;
    head = delete_tail(head); // Delete the tail node of the linked list
    cout << "After deleting tail "; // Print a message indicating deletion of tail
    print(head); // Print the elements of the linked list after deletion
    cout << endl;
    int k = 2;
    head = delete_k(head, k); // Delete the kth node of the linked list
    cout << "After deleting Kth term "; // Print a message indicating deletion of kth node
    print(head); // Print the elements of the linked list after deletion
    cout << endl;
    int el = 4;
    head = delete_el(head, el); // Delete the first occurrence of element from linked list
    cout << "After deleting the element "; // Print a message indicating deletion of element
    print(head); // Print the elements of the linked list after deletion
    return 0; // Exit the program
}
