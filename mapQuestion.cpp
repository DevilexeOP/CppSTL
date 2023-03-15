#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Given 'N' Strings , print unqiue strings
in lexiographical order with their
frequency..
Constraints
 N <= 10^5
|S| <= 100
*/

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] += 1;
    }
    cout << endl;
    cout << "Printing the Frequency" << endl;
    cout << endl;
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    // Printing using iterator ...
    /* map<string, int>::iterator it;
     for (it = m.begin(); it != m.end(); it++)
     {
         cout << (*it).first << " " << (*it).second << endl;
     }
    */
    return 0;
}