#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> maximumPerimeterTriangle(vector<int> sticks)
{
    sort(sticks.begin(), sticks.end());

    for (int i = sticks.size() - 1; i > 1; i--)
    {
        if (sticks[i - 2] + sticks[i - 1] > sticks[i])
            return {sticks[i - 2], sticks[i - 1], sticks[i]};
    }

    return {-1};
}

int main()
{
    for (auto x : maximumPerimeterTriangle({1, 1, 1, 2, 3, 5}))
        cout << x << " ";
    cout << "\n";
    return 0;
}