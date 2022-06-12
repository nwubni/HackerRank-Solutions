#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
string gamingArray(vector<int> arr)
{
    string players[] = {"BOB", "ANDY"};
    int winner = 0;
    map<int, int> m;

    for (int i = 0; i < arr.size(); i++)
        m[arr[i]] = i;

    auto it = m.rbegin();
    pair<int, int> p = *it;
    it++;

    for (; it != m.rend(); it++)
    {
        if (p.second > it->second)
        {
            winner = winner ? 0 : 1;
            p = *it;
        }

        if (it->second == 0)
            break;
    }

    return players[winner];
}


int main()
{
    cout << gamingArray({2, 3, 5, 4, 1}) << endl;
    // cout << gamingArray({5, 2, 6, 3, 4}) << endl;
    // cout << gamingArray({3, 1}) << endl;
    // cout << gamingArray({1, 3, 5, 7, 9}) << endl;
    // cout << gamingArray({7, 4, 6, 5, 9}) << endl;
    return 0;
}
