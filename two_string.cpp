#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION

string twoStrings(string s1, string s2)
{
    sort(s2.begin(), s2.end());

    for (char c : s1)
        if (binary_search(s2.begin(), s2.end(), c))
            return "YES";

    return "NO";
}

int main()
{
    cout << twoStrings("and", "art") << endl;
    return 0;
}