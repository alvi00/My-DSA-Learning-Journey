#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter a size of the array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Give the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     int j = i;
    //     while (j > 0 && arr[j - 1] > arr[j])
    //     {
    //         swap(arr[j - 1], arr[j]);
    //         j--;
    //     }
    // }

    for(int i=0;i<=n-1;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
