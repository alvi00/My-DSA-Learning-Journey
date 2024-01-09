#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter a size of the array"<<endl;
    int n;
    cin >> n;
    int arr[n];
     cout<<"Give the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
