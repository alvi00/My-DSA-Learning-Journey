#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    Node *next;
    int data;
    Node(int);
};

class linked_list{
private:
    Node *head;
public:
linked_list();
void insert_at_begin(int);
void insert_at_pos(int,int);
void insert_at_end(int);

void delete_at_begin();
void delete_at_pos(int);
void delete_at_end();

void insert(int);
void delete_num(int);
void display();
};

#endif // HEADER_H_INCLUDED
