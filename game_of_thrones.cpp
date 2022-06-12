#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
string gameOfThrones(string s)
{
    map<int, int> m;
    int len = s.length();
    int odd = 0;

    for (char c : s)
        m[c]++;

    for (pair<int, int> p : m)
    {
        if (p.second % 2 == 1)
            ++odd;

        if (odd > 1)
            return "NO";
    }

    if ((len % 2 == 1) || (len % 2 == 0 && odd == 0))
        return "YES";

    return "NO";
}

int main()
{
    cout << gameOfThrones("cdcdcdcdeeeef") << endl;
    return 0;
}