#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> countingSort(vector<int> arr)
{
    vector<int> result(100);

    for (int i = 0; i < arr.size(); i++)
        result[arr[i]]++;

    return result;
}

int main()
{
    for (auto x : countingSort({1, 1, 3, 2, 1}))
        cout << x << " ";
    cout << endl;
    return 0;
}