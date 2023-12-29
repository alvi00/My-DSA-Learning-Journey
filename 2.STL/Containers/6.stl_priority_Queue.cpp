#include<bits/stdc++.h>
using namespace std;

void learn_priority_queue(){

    //This is called maximum heap
    //Here what happens is which value is the largest go to the top of the queue
    //so it is sorted in a way
    //it is stayed in a tree data structure
    priority_queue<int>alvi;
    alvi.emplace(10);
    alvi.emplace(20);
    alvi.emplace(30);
    alvi.emplace(2);
    alvi.emplace(100);
    alvi.emplace(3);
    while (!alvi.empty())
    {
        cout<<alvi.top()<<" ";
        alvi.pop();
    }


    cout<<endl;

    //this is os another type which is called minimum heap
    //so the value which is minimum goes to top

    priority_queue<int,vector<int>,greater<int>>shefa;

    shefa.emplace(10);
    shefa.emplace(40);
    shefa.emplace(17);
    shefa.emplace(50);
    shefa.emplace(1);
    while (!shefa.empty())
    {
        cout<<shefa.top()<<" ";
        shefa.pop();
    }
    
}

int main(){

    learn_priority_queue();
    return 0;
}
