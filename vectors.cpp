#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void prinVector(vector<int> &v)
{
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        prinVector(v);
        v.push_back(x);
    }
    prinVector(v);
    return 0;
}