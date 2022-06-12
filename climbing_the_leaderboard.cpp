#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> climbingLeaderboard(set<int> ranked, vector<int> player)
{
    vector<int> result;

    for (int x : player)
    {
        while (!ranked.empty() && x >= *ranked.begin())
            ranked.erase(ranked.begin());

        result.push_back(ranked.size() + 1);
    }

    return result;
}

int main()
{
    // for (int x : climbingLeaderboard({100, 90, 90, 80}, {70, 80, 105}))
    for (int x : climbingLeaderboard({100, 100, 50, 40, 40, 20, 10}, {5, 25, 50, 105}))
        cout << x << endl;
    return 0;
}