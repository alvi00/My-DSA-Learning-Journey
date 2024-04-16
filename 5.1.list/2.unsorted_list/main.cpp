#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    unsorted_list ul1;
    ul1.insert_item(10);
    ul1.insert_item(20);
    ul1.reset_list();
    for(int i=0;i<ul1.length_is();i++){
        int a;
        ul1.getnext_item(a);
        cout<<a<<endl;
    }
    ul1.delete_item(10);
        ul1.reset_list();
    for(int i=0;i<ul1.length_is();i++){
        int a;
        ul1.getnext_item(a);
        cout<<a<<endl;
    }
    return 0;
}
