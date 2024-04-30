#include "header.h"

Node::Node(int a){
    next=nullptr;
    data=a;
}

alvi::alvi(){
    top=nullptr;

}

bool alvi::isfull(){
    try{
        Node *temp=new Node(10);
        delete temp;
        return false;
    }catch(bad_alloc exception){
        return true;
    }
}

bool alvi::isempty(){
   if( top==nullptr){
        return true;
   }else{
       return false;
   }
}


void alvi::push(int a){

     if(isfull()==true)
    {
        throw fullstack();
    }
    else{
    Node *newnode=new Node(a);
    if(top==nullptr){
        top=newnode;
    }else{
        Node *temp=top;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
}

void alvi::pop(){
     if(isempty()==true)
    {
        throw emptystack();
    }
    else
    {
    Node *temp=top;
    top=top->next;
    delete temp;
}
}

int alvi::top_el(){
    return top->data;
}

void alvi::print(){
     if(isempty()==true)
    {
        throw fullstack();
    }
    else
    {
    Node *temp=top;
    while(temp!=nullptr){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}

}

alvi::~alvi()
{
    Node*temp=top;
    while(temp!=nullptr)
    {
        Node *del=temp;
        temp=temp->next;
        delete del;
    }
}

