#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION

pair<int, int> firstLast(vector<int> a, int x)
{
    pair<int, int> p = {-1, -1};
    auto c = find(a.begin(), a.end(), x);

    if (!(c != a.end()))
        return p;

    p.first = lower_bound(a.begin(), a.end(), x) - a.begin();
    p.second = upper_bound(a.begin() + p.first, a.end(), x) - a.begin() - 1;

    return p;
}

int main()
{
    pair<int, int> p = firstLast({2, 3, 6, 7, 7, 8, 8, 8, 12}, 8);
    cout << p.first << ", " << p.second << "\n";
    return 0;
}