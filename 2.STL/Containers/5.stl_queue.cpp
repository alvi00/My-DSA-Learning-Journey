#include<bits/stdc++.h>
using namespace std;

void queue_learn(){

    queue<int>alvi;
    alvi.push(10);
    alvi.emplace(20);
    alvi.emplace(30);
    alvi.emplace(40);
    cout<<alvi.front()<<endl;
    //prints the front element
    alvi.pop();
    cout<<alvi.front()<<endl;

    while(!alvi.empty()){
        cout<<alvi.front()<<" ";
        alvi.pop();
    }


}

int main(){
    queue_learn();
    return 0;
}
