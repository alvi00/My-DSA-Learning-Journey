#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
const int max_item=10;
class sorted_list{

private:
    int length;
    int currentpos;
    int arr[max_item];
public:
    sorted_list();
    void insert_item(int);
    void delete_item(int);
    void retrive_item(int&,bool&);
    void getnextitem(int&);
    void reset_list();
    int length_is();
};

#endif // HEADER_H_INCLUDED
