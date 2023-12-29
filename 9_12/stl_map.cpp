#include<bits/stdc++.h>
using namespace std;

//so the data stracture is here you can store two values
//the first one is the key
//second one is the value
//map<int,int>alvi; here first int is key values and the second int is actual value
//so here map stores values in a way that
//all the key values are unique and they are stored in a sorted way
//so the key values can't be same and store in a sorted way
//but the values (second int)  are not stored in a sorted or unique way
void learn_map(){

    map<int,int>alvi;
     alvi[1]=0;
    //so here what is happening is that 1 is the key and for that key the value is 0
    alvi.emplace(2,2);
    alvi.insert({3,3});
    alvi.insert({5,2});
    alvi.emplace(2,3);
    //this is another ways to store values
    //here if i give same key then it will not be stored
    for(auto it:alvi){
        cout<<it.first<<","<<it.second<<" ";
    }
    cout<<endl;

    //another way of storing
     map<pair<int,int>,string>shefa;
     shefa[{1,2}]="alvi";
     shefa.emplace(make_pair(2,3),"okita");
     shefa.insert({{4,2},"fahim"});
     
     for(auto bt:shefa){
        cout<<bt.first.first<<","<<bt.first.second<<","<<bt.second<<endl;
     }


    //another way
    map<int,pair<int,double>>okita;
    okita[1]=make_pair(1,2.2);
    okita.emplace(2,make_pair(22,3.2));
    okita.insert({5,{1,1.2}});

    for(auto et:okita){
        cout<<et.first<<","<<et.second.first<<","<<et.second.second<<endl;
    }


    auto it=alvi.find(0);
    cout << (*it).second;

    //if something is not there it points alvi.end();

    auto it=alvi.upper_bound(2);
    auto it=alvi.lower_bound(2);


}
int main(){
    learn_map();

    return 0;
}
