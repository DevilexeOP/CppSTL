#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p;
    cin >> p.first >> p.second;
    cout << p.first << p.second << endl;

    cout << endl;

    pair<int, string> p2;
    p2 = {4, "string"};
    cout << p2.first << p2.second << endl;
    pair<int, string> &p1 = p2;
    p1.first = 2;
    cout << p1.first << p1.second << endl;

    cout << endl;

    pair<int, int> p_array[3];
    p_array[0] = {23, 44};
    p_array[1] = {233, 443};
    p_array[2] = {2343, 4443};
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; ++i)
    {
        cout << p_array[i].first << " " << p_array[i].second << " " << endl;
    }

    return 0;
}