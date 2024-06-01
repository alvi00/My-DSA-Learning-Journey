#include "header.h"
using namespace std;

Node::Node(int a)
{
    data = a;
    left = nullptr;
    right = nullptr;
}

BinaryTree::BinaryTree()
{
    root = nullptr;
}

BinaryTree::~BinaryTree()
{
    makeEmpty(root);
}

void BinaryTree::insert(int value)
{
    insert(root, value);
}

void BinaryTree::insert(Node* &root, int value)
{
    if (root == nullptr)
    {
        root = new Node(value);
        return;
    }

    if (value < root->data)
    {
        insert(root->left, value);
    }
    else
    {
        insert(root->right, value);
    }
}

void BinaryTree::search(int value)
{
    search(root, value);
}

void BinaryTree::search(Node* root, int value)
{
    while (root != nullptr && root->data != value)
    {
        if (value < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    if (root == nullptr)
    {
        cout << "Sorry" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}

void BinaryTree::print()
{
    print(root);
}

void BinaryTree::print(Node* root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << "  ";
    print(root->left);
    print(root->right);
}

void BinaryTree::deleteNode(int key)
{
    root = deleteNode(root, key);
}

Node* BinaryTree::deleteNode(Node* root, int key)
{
    if (root == nullptr)
    {
        return root;
    }
    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if (root->left == nullptr)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

Node* BinaryTree::findMin(Node* root)
{
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

int BinaryTree::countNodes(Node* root)
{
    if (root == nullptr)
    {
        return 0;
    }
    else
    {
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
}

int BinaryTree::lengthis()
{
    return countNodes(root);
}

void BinaryTree::makeEmpty(Node* &root)
{
    if (root != nullptr)
    {
        makeEmpty(root->left);
        makeEmpty(root->right);
        delete root;
        root = nullptr;
    }
}
