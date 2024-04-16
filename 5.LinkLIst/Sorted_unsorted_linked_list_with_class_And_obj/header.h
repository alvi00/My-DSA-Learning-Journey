#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

class Node{
public:
    Node *next;
    int data;
    Node(int);
};

class link_list{
private:
    Node *head;
    int length;
    Node *currentpos;
public:
    link_list();
    ~link_list();
    void inset_item_begin(int);
    void insert_item_end(int);
    void insert_item_sort(int);
    void delete_item(int);
    void makeempty();
    bool isfull();
    void getnextitem(int&);
    void resetlist();
    void display();

};



#endif // HEADER_H_INCLUDED
