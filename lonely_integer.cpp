#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int lonelyinteger(vector<int> a)
{
    map<int, int> s;
    for (auto x : a)
        s[x]++;

    for (auto x : s)
        if (x.second == 1)
            return x.first;

    return 0;
}

int main()
{
    cout << lonelyinteger({1,2,3,4,3,2,1}) << endl;
    return 0;
}