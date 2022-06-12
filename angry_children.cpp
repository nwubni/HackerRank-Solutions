#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int maxMin(int k, vector<int> arr)
{
    --k;

    sort(arr.begin(), arr.end());

    int minMax = arr[k] - arr[0];

    for (int i = 1; i + k < arr.size(); i++)
        minMax = min(arr[i + k] - arr[i], minMax);

    return minMax;
}

int main()
{

    cout << maxMin(3, {10, 100, 300, 200, 1000, 20, 30}) << endl;
    return 0;
}