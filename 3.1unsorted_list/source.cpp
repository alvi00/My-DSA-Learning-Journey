#include "header.h"
#include<bits/stdc++.h>
using namespace std;
template<class T>
unsorted_list<T>::unsorted_list()
{
    length=0;
    currentpos=-1;
}
template<class T>
void unsorted_list<T>::make_empty()
{
    length=0;
}
template<class T>
void unsorted_list<T>::reset_list()
{
    currentpos=-1;
}
template<class T>
int unsorted_list<T>::length_is(){
return length;
}

template<class T>
int unsorted_list<T>::currentposition(){
return currentpos;
}

template<class T>
void unsorted_list<T>::insert_item(T a){
    arr[length]=a;
    length++;
}

template<class T>
void unsorted_list<T>::deleteitem(T a){
    int temp=0;
    while(temp<length){
        if(arr[temp]==a){
            arr[temp]=arr[length-1];
            length--;
        }
        temp++;
    }
}

template<class T>
void unsorted_list<T>::getnextitem(T &a){
    currentpos++;
    a=arr[currentpos];
}

template<class T>
void unsorted_list<T>::retrive_item(T &a, bool &b){
    int temp=0;
    b=false;
    while(temp<length && !b){
        if(arr[temp]==a){
            b=true;
            a=arr[temp];
        }else{
            temp++;
        }
    }
}

template<class T>
bool unsorted_list<T>::isfull(){
return (length==max_item);
}
