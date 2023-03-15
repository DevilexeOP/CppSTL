#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // for Vectors
    vector<int> v;
    cout << "Enter N elements" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Printing the elements" << endl;
    for (int &value : v)
    {
        cout << value << " ";
    }
    // for Pairs
    cout << endl;
    cout << "Pair part" << endl;
    vector<pair<int, int>> v_p = {{32, 22}, {444, 33}};
    for (pair<int, int> &value : v_p)
    {
        cout << value.first << " " << value.second << " ";
    }
    // using auto keyword
    cout << endl;
    vector<int> v1;
    cout << "New vector " << endl;
    int elements;
    cin >> elements;
    for (int i = 0; i < elements; i++)
    {
        int input_elements;
        cin >> input_elements;
        v1.push_back(input_elements);
    }
    cout << "printing vector using AUTO" << endl;
    for (auto &elements : v1)
    {
        cout << elements << endl;
    }
    return 0;
}