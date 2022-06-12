#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> jimOrders(vector<vector<int>> orders)
{
    multimap<int, int> m;
    vector<int> ans;

    for (int i = 0; i < orders.size(); i++)
    {
        pair<int, int> p = {orders[i][0] + orders[i][1],
                            i};
        m.insert(p);
    }

    for (auto x : m)
        ans.push_back(x.second + 1);

    return ans;
}

int main()
{
    for (int x : jimOrders({{8, 3}, {5, 6}, {6, 2}, {2, 3}, {4, 3}}))
        cout << x << " ";
    cout << endl;
    return 0;
}