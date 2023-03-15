#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printingMap(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m) // to access the Map the T.C => O(log (n))
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "thisisone";  // insert values in map // T.C => O(log (n)) !where n is the no.of elements in map
    m[4] = "thisisfour"; // insert values in map
    m[2] = "thisistwo";  // insert values in map
    // another way to insert values in map
    m.insert({6, "thisissix"});
    cout << "Before erase" << endl;
    printingMap(m);

    /* The Key values are always unique
    Example => m[4] = "abc"
            => m[4] = "cde" => this will override the above value
     */

    cout << endl;

    /* Finding values in map and T.C => O(log (n)) */
    
    auto it = m.find(1);
    if (it == m.end())
        cout << "No Value " << endl;
    else
        cout << (*it).first << " " << (*it).second << endl;

    /* Erasing values in map & T.C => O(log (n)) */

    cout << endl;
    cout << "After erase" << endl;
    // Check n then erase
    if (it != m.end())
        m.erase(1);
    printingMap(m);
    // For clearing the map
    cout << endl;
    cout << "After clear" << endl;
    m.clear();
    cout << m.size() << " "
         << "Size of the map" << endl;
    cout << "Nothing is there after clearing" << endl;



    // printing the map by declaring iterator
    // cout << endl;
    // cout << " printing the map by declaring iterators" << endl;
    // cout << endl;
    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    // printing using auto keyword
    // cout << endl;
    // cout << " printing using auto keyword" << endl;
    // cout << endl;
    // for (auto &pr : m)
    // {
    //     cout << pr.first << " " << pr.second << endl;
    // }

    return 0;
}