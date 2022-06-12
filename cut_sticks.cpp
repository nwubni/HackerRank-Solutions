#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> cutTheSticks(vector<int> arr)
{
    vector<int> result;
    result.push_back(arr.size());

    sort(arr.rbegin(), arr.rend());

    while (!arr.empty())
    {
        int min = arr.back();

        while (!arr.empty() && arr.back() == min)
            arr.pop_back();

        if (!arr.empty())
            result.push_back(arr.size());
    }

    return result;
}

int main()
{
    for (auto x : cutTheSticks({1, 3, 2}))
        cout << x << "\n";
    return 0;
}