#include <iostream>
#include "header.h"
#include "source.cpp"
using namespace std;

int main()
{
    unsorted_list<int>a1;
    a1.insert_item(5);
    a1.insert_item(7);
    a1.insert_item(6);
    a1.insert_item(9);
    a1.reset_list();
    for(int i=0; i<a1.length_is(); i++)
    {
        int a;
        a1.getnextitem(a);
        cout<<a<<"  ";
    }
    cout<<endl;
    cout<<a1.length_is()<<endl;
    a1.insert_item(1);
    a1.reset_list();
    for(int i=0; i<a1.length_is(); i++)
    {
        int a;
        a1.getnextitem(a);
        cout<<a<<"  ";
    }
    cout<<endl;
    bool b;
    int x1=4;
    a1.retrive_item(x1,b);
    if(b==true){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    int x2=5;
        a1.retrive_item(x2,b);
    if(b==true){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    int x3=9;
        a1.retrive_item(x3,b);
    if(b==true){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    int x4=10;
        a1.retrive_item(x4,b);
    if(b==true){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }

    if(a1.isfull()==true){
        cout<<"It is full"<<endl;
    }else{
        cout<<"Not full"<<endl;
    }

    a1.deleteitem(1);
    a1.reset_list();
    for(int i=0;i<a1.length_is();i++){
        int a;
        a1.getnextitem(a);
        cout<<a<<"  ";
    }
cout<<endl;

        a1.deleteitem(6);
    a1.reset_list();
    for(int i=0;i<a1.length_is();i++){
        int a;
        a1.getnextitem(a);
        cout<<a<<"  ";
    }
    cout<<endl;
    a1.make_empty();
    return 0;
}
