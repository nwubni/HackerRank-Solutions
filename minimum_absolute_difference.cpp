#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int minimumAbsoluteDifference(vector<int> arr)
{
    int min_diff = 1e8;
    sort(arr.begin(), arr.end());

    for (int i = 0; i + 1 < arr.size(); i++)
        min_diff = min(abs(arr[i] - arr[i + 1]), min_diff);

    return min_diff;
}

int main()
{
    cout << minimumAbsoluteDifference({-2, 2, 4}) << endl;
    return 0;
}