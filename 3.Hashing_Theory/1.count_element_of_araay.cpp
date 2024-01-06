#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Enter the size of Array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the Array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[13]={0};
    //here the size is 13 because the maximun number use gonna give is 12
    for(int i=0;i<n;i++){
      hash[arr[i]]++;
    }
    cout<<"Enter the number of quaries"<<endl;
    int q;
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the quary"<<endl;
        cin>>number;
        cout<<number<<" apears "<<hash[number]<<" this times"<<endl;
    }
}