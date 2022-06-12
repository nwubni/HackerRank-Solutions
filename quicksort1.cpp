#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> quickSort(vector<int> arr)
{
    vector<int> left;
    vector<int> right;
    int pivot = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (pivot > arr[i])
            left.push_back(arr[i]);
        else if (pivot < arr[i])
            right.push_back(arr[i]);
    }

    left.push_back(pivot);
    left.insert(left.end(), right.begin(), right.end());

    return left;
}

int main()
{
    for (auto x : quickSort({4,3,2,1}))
        cout << x;
    cout << "\n";
    return 0;
}