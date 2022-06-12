#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int pickingNumbers(vector<int> a)
{
    int prev_count = 0, curr_count;

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        curr_count = 1;

        for (int j = i + 1; (a[j] - a[i]) <= 1 && j < a.size(); j++)
            ++curr_count;

        prev_count = max(curr_count, prev_count);
    }

    return prev_count;
}

int main()
{
    cout << pickingNumbers({1, 1, 2, 2, 4, 4, 5, 5, 5}) << endl;
    // cout << pickingNumbers({4, 6, 5, 3, 3, 1}) << endl;
    // cout << pickingNumbers({1, 2, 2, 3, 1, 2}) << endl;
    return 0;
}