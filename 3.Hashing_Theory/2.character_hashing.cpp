#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the string" << endl;
    string alvi;
    cin >> alvi;

    int hash[26] = {0};

    int a = 'a';
    for (int i = 0; i < alvi.size(); i++)
    {
        hash[alvi[i] - a]++;
    }
    cout << "Enter the number of quries" << endl;
    int q;
    cin >> q;
    while (q--)
    {
        cout << "Enter the character" << endl;
        char al;
        cin >> al;
        cout << hash[al - a];
    }

    // the uper part is only for lower case character
    // what is it is not then

    string a;
    cin >> a;

    int hash[256] = {0};

    for (int i = 0; i < a.size(); i++)
    {
        int index = (int)a[i];
        hash[index]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        int index = (int)c;
        cout << hash[index];
    }
}
