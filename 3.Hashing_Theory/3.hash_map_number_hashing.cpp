#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of a array"<<endl;
    int n;
    cin >> n;
    cout<<"Enter the array elemetns"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> alvi;
    for (int i = 0; i < n; i++)
    {
        alvi[arr[i]]++;
    }
    cout<<"Enter the number of queries"<<endl;

    int q;
    cin>>q;
    while(q--){
        cout<<"Enter the number"<<endl;
        int num;
        cin>>num;
        cout<<"This number comes ";
        cout<<alvi[num]<<" times"<<endl;
        
    }
    return 0;
}
