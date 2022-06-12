#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION

int attackDirection(int n, int x_q, int y_q, int x, int y, map<string, int> obstacles)
{
    int count = 0;

    while (((x_q + x) <= n && (x_q + x) > 0) && ((y_q + y) <= n && (y_q + y) > 0))
    {
        x_q += x, y_q += y;

        if (!obstacles[to_string(y_q) + "," + to_string(x_q)])
            ++count;
        else
            break;
    }

    return count;
}

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles)
{
    int count = 0;
    map<string, int> obs;

    if (k)
        for (auto obstacle : obstacles)
            obs[to_string(obstacle[0]) + "," + to_string(obstacle[1])]++;

    vector<pair<int, int>> directions = {{-1, 1}, {1, -1}, {1, 1}, {-1, -1}, {0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    for (auto d : directions)
        count += attackDirection(n, c_q, r_q, d.first, d.second, obs);

    return count;
}

int main()
{
    // cout << queensAttack(8, 1, 4, 4, {{3, 5}}) << endl;
    // cout << queensAttack(5, 3, 4, 3, {{5, 5}, {4, 2}, {2, 3}}) << endl;
    cout << queensAttack(1, 0, 1, 1, {{}}) << endl;
    return 0;
}