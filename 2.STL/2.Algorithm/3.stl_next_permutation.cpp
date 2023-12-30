#include<bits/stdc++.h>
using namespace std;

void learn_next_permutation(){
string a="324";
sort(a.begin(),a.end());
do{
    cout<<a<<endl;
}while (next_permutation(a.begin(),a.end()));


}
int main() {
    learn_next_permutation();
    return 0;
}
