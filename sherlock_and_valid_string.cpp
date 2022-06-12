#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
string isValid(string s)
{
    map<char, int> m;
    vector<int> v;
    set<int> unique;

    for (char c : s)
        m[c]++;

    for (auto it = m.begin(); it != m.end(); ++it)
        v.push_back(it->second), unique.insert(it->second);

    if (unique.size() > 2)
        return "NO";

    sort(v.begin(), v.end());

    int count_f = count(v.begin(), v.end(), v[0]);
    int count_l = v.size() - count_f;

    if ((count_f > 1 && count_l > 1) || (count_f != 1 && (*v.rbegin() - *v.begin() > 1)))
        return "NO";

    return "YES";
}

int main()
{
    cout << isValid("abbbbccccdddd") << endl;
    return 0;
}