#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
const int max_item=10;
template <class T>
class unsorted_list{

private:
    int currentpos;
    int length;
    T arr[max_item];

public:
    unsorted_list();
    void make_empty();
    void reset_list();
    int length_is();
    int currentposition();
    void insert_item(T);
    void deleteitem(T);
    void getnextitem(T&);
    void retrive_item(T&,bool&);
    bool isfull();
};


#endif // HEADER_H_INCLUDED
