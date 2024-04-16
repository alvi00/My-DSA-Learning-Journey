#include <iostream>
#include"header.h"
using namespace std;

int main()
{
    link_list alvi;
    alvi.insert_item_sort(5);
    alvi.insert_item_sort(3);
    alvi.insert_item_sort(22);
    alvi.insert_item_sort(10);
    //alvi.delete_item(22);
    //alvi.display();
    alvi.resetlist();
    for(int i=0;i<4;i++){
        int a;
        alvi.getnextitem(a);
        cout<<a<<" ";
    }
    return 0;
}
