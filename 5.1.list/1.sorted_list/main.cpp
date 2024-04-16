#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    sorted_list s1;
    s1.insert_item(10);
    s1.insert_item(20);
    s1.insert_item(30);
    s1.insert_item(40);
    s1.insert_item(50);
    s1.reset_list();
    int a;
    for(int i=0; i<s1.length_is(); i++)
    {
        s1.getnextitem(a);
        cout<<a<<"  ";
    }
    cout<<endl;
    s1.delete_item(50);
    s1.reset_list();
    int b;
    for(int i=0; i<s1.length_is(); i++)
    {
        s1.getnextitem(b);
        cout<<b<<"  ";
    }
    int c=40;
    bool d;
    s1.retrive_item(c,d);
    if(d==true){
        cout<<"found ";
        cout<<c;
    }
    return 0;
}
