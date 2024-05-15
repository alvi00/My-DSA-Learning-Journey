#include "header.h"
void Node::insert(int a)
{
    Node *newNode=new Node(a);
    Node *parent=nullptr;
    Node *current=this;

    while(current!=nullptr)
    {
        parent=current;
        if(current->data>a)
        {
            current=current->left;
        }
        else
        {
            current=current->right;
        }

    }

    if(parent->data>a)
    {
        parent->left=newNode;
    }
    else
    {
        parent->right=newNode;
    }

}

Node *findmin(Node *root){
    while(root->left!=nullptr){
        root=root->left;
    }
    return root;
}

Node* Node::deleteNode(Node *root,int k){
    if(root==nullptr){
        return root;
    }
    if(root->data>k){
        root->left=deleteNode(root->left,k);
    }
    else if(root->data<k){
        root->right=deleteNode(root->right,k);
    }
    else{
        if(root->left==nullptr){
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else{
            Node*temp=root->left;
            delete root;
            return temp;
        }
        Node *temp=findmin(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,root->data);

    }
    return root;
}


void Node::search(Node *root,int a){
    while(root!=nullptr &&root->data!=a){
        if(root->data>a){
            root=root->left;
        }else{
            root=root->right;
        }
    }

    if(root==nullptr){
        cout<<"Soryy"<<endl;
    }
    else{
        cout<<"Yees";
    }
}

void Node::print(Node *root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<"  ";
    print(root->left);
    print(root->right);
}


int countnodes(Node *root){
    if(root==nullptr){
        return 0;
    }else{
        return countnodes(root->left)+countnodes(root->right)+1;
    }
}

int Node::lengthis(Node *root){
    return countnodes(root);
}
