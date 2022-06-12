#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> maxSubarray(vector<int> arr)
{
    int maxSubA = max(0, arr[0]);
    int currSum = maxSubA;
    int maxSubS = maxSubA;

    for (int i = 1; i < arr.size(); i++)
    {
        currSum = max(0, currSum + arr[i]);
        maxSubA = max(maxSubA, currSum);

        if (arr[i] > 0)
            maxSubS += arr[i];
    }

    if (maxSubA == 0)
        maxSubA = *max_element(arr.begin(), arr.end());
    if (maxSubS == 0)
        maxSubS = *max_element(arr.begin(), arr.end());

    return {maxSubA, maxSubS};
}

int main()
{
    // for (int x : maxSubarray({1, 2, 3, 4}))
    // for (int x : maxSubarray({2, -1, 2, 3, 4, -5}))
    // for (int x : maxSubarray({-2, -3, -1, -4, -6}))
    for (int x : maxSubarray({-1, 2, 3, -4, 5, 10}))
        cout << x << " ";
    cout << endl;
    return 0;
}