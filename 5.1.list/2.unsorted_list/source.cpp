#include "header.h"
#include <bits/stdc++.h>
using namespace std;

unsorted_list::unsorted_list(){
    currentpos=-1;
    length=0;
}
void unsorted_list::make_empty(){
    length=0;
}
bool unsorted_list::isfull(){
    if(length==max_item){
        return 1;
    }else{
        return 0;
    }
}
int unsorted_list::length_is(){
    return length;
}

void unsorted_list::reset_list(){
    currentpos=-1;
}
void unsorted_list::getnext_item(int &a){
    currentpos++;
    a=arr[currentpos];
}

void unsorted_list::insert_item(int a){
    arr[length]=a;
    length++;
}

void unsorted_list::delete_item(int a){
    int temp=0;
    while(temp<length){

        if(arr[temp]==a){
            arr[temp]=arr[length-1];
            length--;
        }
        temp++;
    }
}

void unsorted_list::retrieveitem(int &a,bool &b){
    int temp=0;
    while(temp<length){
        if(arr[temp]==a){
            b=true;
            a=arr[temp];
        }
        temp++;
    }
}
