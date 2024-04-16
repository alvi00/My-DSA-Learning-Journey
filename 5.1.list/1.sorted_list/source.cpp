#include "header.h"
#include<bits/stdc++.h>
using namespace std;
sorted_list::sorted_list(){
    length=0;
    currentpos=-1;
}

void sorted_list::insert_item(int a){
    int temp=length-1;
    while(temp>=0 && a<arr[temp]){
        arr[temp+1]=arr[temp];
        temp--;
    }
    arr[temp+1]=a;
    length++;
}

void sorted_list::delete_item(int a){
    int temp=0;
    while(temp<length){

        if(arr[temp]==a){
            for(int i=temp;i<length;i++){
                arr[i]=arr[i+1];
            }
            length--;
        }
         temp++;
    }
}

void sorted_list::retrive_item(int &a,bool &b){
    int low=0;
    int high=length-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==a){
            b=true;
            a=arr[mid];
            return;
        }
        else if(arr[mid]>a){
            high=mid-1;
        }
        else if (arr[mid]<a){
            low=mid+1;
        }
    }
}

void sorted_list::reset_list(){
    currentpos=-1;
}

void sorted_list::getnextitem(int &a){
    currentpos++;
    a=arr[currentpos];
}
int sorted_list::length_is(){
return length;
}

sorted_list::~sorted_list(){
delete[]arr;
}
