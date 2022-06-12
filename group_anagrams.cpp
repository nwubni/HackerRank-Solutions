#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
void groupAnagrams(vector<string> v)
{
    map<string, vector<string>> m;
    string x;

    for (int i = 0; i < v.size(); i++)
    {
        x = v[i];
        sort(x.begin(), x.end());
        m[x].push_back(v[i]);
    }

    for (auto x : m)
    {
        for (auto y : x.second)
            cout << y << " ";
        cout << "\n";
    }
}

int main()
{
    groupAnagrams({"eat", "tea", "tan", "ate", "nat", "bat"});
    return 0;
}