#include "header.h"
#include<bits/stdc++.h>
using namespace std;
Node::Node(int a){
    data=a;
    next=nullptr;
}

link_list::link_list(){
    head=nullptr;
    length=0;
    currentpos=nullptr;
}

link_list::~link_list(){
    makeempty();
}
void link_list::inset_item_begin(int a){
    Node *temp=new Node(a);
    temp->next=head;
    head=temp;
}

void link_list::insert_item_end(int a){
    Node *newnode=new Node(a);
    Node *temp=head;
    while(temp->next=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}

void link_list::insert_item_sort(int a){
    Node *newnode=new Node(a);
    if(head==nullptr || head->data>a){
        newnode->next=head;
        head=newnode;
    }
    else{
            Node *temp=head;
    while(temp->next!=nullptr&& temp->next->data<a){
       temp=temp->next;
    }
     newnode->next=temp->next;
        temp->next=newnode;
    }
}
void link_list::delete_item(int a){
    Node *temp=head;

    if(temp->data==a){
        head=head->next;
        delete temp;
    }
    else{
        Node *prev=nullptr;
        while(temp!=nullptr){
            if(temp->data==a){
                prev->next=prev->next->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
    }
}

void link_list::makeempty(){
    Node *temp=head;
    while(head!=nullptr){
        head=head->next;
        delete temp;
        temp=head;
    }
}

bool link_list::isfull(){
    try{
        Node *temp=new Node(0);
        delete temp;
        return false;

    }catch(bad_alloc exception){
        return true;
    }

}

void link_list::display(){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void link_list::getnextitem(int&a){
    if(currentpos==nullptr){
        currentpos=head;
    }
    else{
        currentpos=currentpos->next;
    }
    a=currentpos->data;
}

void link_list::resetlist(){
    currentpos=nullptr;
}
