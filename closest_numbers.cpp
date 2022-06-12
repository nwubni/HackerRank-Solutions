#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> closestNumbers(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    vector<int> result;
    int min = arr[1] - arr[0];

    for (int i = 1; i < arr.size(); i++)
        if (arr[i] - arr[i - 1] < min)
        {
            min = arr[i] - arr[i - 1];
            result.clear();
            result.push_back(arr[i - 1]), result.push_back(arr[i]);
        }
        else if (arr[i] - arr[i - 1] == min)
            result.push_back(arr[i - 1]), result.push_back(arr[i]);

    return result;
}

int main()
{
    // for (auto x : closestNumbers({-20, -3916237, -357920, -3620601, 7374819, -7330761, 30, 6246457, -6461594, 266854}))
    for (auto x : closestNumbers({5, 2, 3, 4, 1}))
        cout << x << " ";
    cout << endl;
    return 0;
}