#include "header.h"
Node::Node(int a)
{
    data=a;
    next=nullptr;
}

linked_list::linked_list()
{
    head=nullptr;
}

void linked_list::insert_at_begin(int a)
{
    Node *newnode=new Node(a);
    newnode->next=head;
    head=newnode;
}

void linked_list::insert_at_pos(int p,int a)
{
    Node *newnode=new Node(a);

    if(p==1)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        Node *prev=nullptr;
        Node *temp=head;

        int count=1;
        while(temp!=nullptr)
        {
            if(count==p)
            {
                prev->next=newnode;
                newnode->next=temp;
                break;
            }
            prev=temp;
            temp=temp->next;
            count++;
        }
    }
}

void linked_list::insert_at_end(int a)
{
    Node*newnode=new Node(a);
    Node *temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void linked_list::delete_at_begin()
{
    Node *temp=head;
    head=head->next;
    delete temp;
}
void linked_list::delete_at_pos(int p)
{
    if(p==1)
    {
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    else
    {
        int count=1;
        Node *prev=nullptr;
        Node *temp=head;
        while(temp!=nullptr)
        {
            if(p==count)
            {
                prev->next=prev->next->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
            count++;
        }
    }
}

void linked_list::delete_at_end()
{
    Node *temp=head;
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}

void linked_list::display()
{
    Node *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"    ";
        temp=temp->next;
    }
}
void linked_list::insert(int a)
{
    Node *newnode=new Node(a);
    if(head==nullptr)
    {
        head=newnode;
    }
    else
    {
        Node *temp=head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void linked_list::delete_num(int a)
{
    Node *temp=head;
    if(temp->data==a)
    {
        head=head->next;
        delete temp;
    }
    else
    {
        Node *prev=nullptr;
        temp=head;
        while(temp!=nullptr)
        {
            if(temp->data==a)
            {
                prev->next=prev->next->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }

    }

}

