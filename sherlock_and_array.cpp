#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
string balancedSums(vector<int> arr)
{
    int sum_r = 0;
    int sum_l = 0;

    for (int x : arr)
        sum_r += x;

    for (int x : arr)
    {
        if (2 * sum_l == sum_r - x)
            return "YES";

        sum_l += x;
    }

    return "NO";
}

int main()
{
    cout << balancedSums({1, 2, 3}) << endl;
    return 0;
}