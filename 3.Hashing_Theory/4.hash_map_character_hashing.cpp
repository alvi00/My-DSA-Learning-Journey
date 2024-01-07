#include<bits/stdc++.h>
using namespace std;

int main(){
    string alvi;
    cin>>alvi;
    map<char,int>shefa;
    for(int i=0;i<alvi.size();i++){
        shefa[alvi[i]]++;
    }

    for(map<char,int>::iterator it=shefa.begin();it!=shefa.end();it++){
        cout<<(*it).first<<"->"<<(*it).second<<endl;
    }

}
