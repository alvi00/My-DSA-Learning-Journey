#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
const int max_item=10;

class unsorted_list{

private:
    int length;
    int arr[max_item];
    int currentpos;

public:
    unsorted_list();
    void make_empty();
    bool isfull();
    void insert_item(int);
    void delete_item(int);
    void retrieveitem(int&,bool&);
    void reset_list();
    void getnext_item(int&);
    int length_is();

};


#endif // HEADER_H_INCLUDED
