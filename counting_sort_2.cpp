#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> countingSort(vector<int> arr)
{
    vector<int> sort_result(100);
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
        sort_result[arr[i]]++;

    for (int i = 0; i < sort_result.size(); i++)
    {
        if (sort_result[i])
        {
            for (int j = 1; j <= sort_result[i]; j++)
                result.push_back(i);
        }
    }

    return result;
}

int main()
{
    for (auto x : countingSort({1, 1, 3, 2, 1}))
        cout << x << " ";
    cout << endl;
    return 0;
}