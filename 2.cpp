#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> mp;   // this is a map
    string str;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        cin >> str;
        mp[num] = str;
    }

    // finds function returns an iterator point to the element in the container
    // if the element if not found then it will return end iterator
    auto it = mp.find(5); // O(log(n))
    if (it == mp.end())
        cout << "noting at key 5";
    else
        cout << "element at 5 is" << endl;
    cout << (*it).first << " " << (*it).second;

    cout << endl
         << endl << endl;
    
    // these are some of the map operations

    // erase function takes either key value or it as input and deletes the value
    mp.erase(3); // O(log(n))
    auto it1 = mp.find(5);
    if (it1 != mp.end())
        mp.erase(it1);

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
