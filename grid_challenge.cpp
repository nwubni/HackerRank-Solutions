#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
string gridChallenge(vector<string> grid)
{
    for (auto &s : grid)
        sort(s.begin(), s.end());

    for (int i = 1; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i - 1].length(); j++)
            if (grid[i - 1][j] > grid[i][j])
                return "NO";
    }

    return "YES";
}

int main()
{

    cout << gridChallenge({"abc", "ade", "efg"}) << endl;
    return 0;
}