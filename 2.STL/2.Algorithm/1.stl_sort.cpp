#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){

    if(p1.second<p2.second) return true;
    if(p1.second>p2.second)return false;
    if(p1.first>p2.first)return true;
    return false;
}
void learn_sort(){
    int arr[10];
    sort(arr,arr+10);
    //so here what is happening is I am sorting this whole array

    vector<int>alvi;
    sort(alvi.begin(),alvi.end());
    //so if i have a vector in this way I can sort that

    //this sorting that I was doing in the previous lines
    //was in a assending order
    //if i wanna do it in a decending order then I gootta follow this path

    vector<int>shefa;
    sort(shefa.begin(),shefa.end(),greater<int>());
    //this way it will be sorted in a decending way of a vector

    int fahim[10];
    sort(fahim,fahim+10,greater<int>());
    //this way I can sort a array in a decending order



    //now if I wanna like have something sorted in my order then
    //like I wanna have sort according to second element
    //if second element is same, then 
    //sort according to the first element but in decending order
    pair<int,int>okita[]={{1,2},{2,3},{6,5}};
    sort(okita,okita+10,comp);

}

int main(){
    learn_sort();
    return 0;
}