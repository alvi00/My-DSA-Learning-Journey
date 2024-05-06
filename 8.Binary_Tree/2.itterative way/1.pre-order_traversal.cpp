#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node *left;
    Node *right;
    Node(int a){
        data=a;
        left=nullptr;
        right=nullptr;
    }

    void alvi(Node *root){
       if(root==nullptr){
        return;
       }
       stack<Node *>s;
       s.push(root);
       while(!s.empty()){
        Node *currentpointer=s.top();
        s.pop();
        cout<<currentpointer->data;
        if(currentpointer->right!=nullptr){
            s.push(currentpointer->right);
        }
          if(currentpointer->left!=nullptr){
            s.push(currentpointer->left);
        }


       }

      }

};


int main() { // Main function where execution begins
    // Create a binary tree with given structure
    Node *anas = new Node(1); // Create root node with data 10
    anas->left = new Node(2); // Create left child node with data 20
    anas->right = new Node(3); // Create right child node with data 30
    anas->left->left = new Node(4); // Create left child of left child node with data 40
    anas->left->right=new Node(5);
    anas->right->left=new Node(6);
    anas->right->right=new Node(7);
    
    anas->alvi(anas);

    // Remember to delete dynamically allocated memory to avoid memory leaks
    delete anas->left->right; // Delete right child of left child node
    delete anas->left->left; // Delete left child of left child node
    delete anas->right; // Delete right child node
    delete anas; // Delete root node

    return 0; // Return 0 to indicate successful completion of program
}