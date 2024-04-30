#include "header.h"
Node::Node(int a)
{
    data=a;
    next=nullptr;
}
alvi::alvi()
{
    top=nullptr;
}

bool alvi::isempty()
{
    if(top==nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool alvi::isfull()
{
    try
    {
        Node *temp=new Node(0);
        delete temp;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
}

void alvi::push(int a)
{
    if(isfull()==true)
    {
        throw fullstack();
    }
    else
    {
        Node *newnode=new Node(a);
        newnode->next=top;
        top=newnode;
    }
}

void alvi::pop()
{
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

int alvi::top_el()
{
    return top->data;
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

void alvi::print()
{
    if(isempty()==true)
    {
        throw fullstack();
    }
    else
    {
        Node *anas=top;
        int n=0;
        while(anas!=nullptr)
        {
            n++;
            anas=anas->next;

        }

        int *arr=new int[n];
        Node *current=top;
        int index=0;
        while(current!=nullptr)
        {
            arr[index]=current->data;
            current=current->next;
            index++;
        }

        for(int i=0; i<=n/2; i++)
        {
            int temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp;
        }

        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<"   ";
        }

        delete[] arr;
    }
}

