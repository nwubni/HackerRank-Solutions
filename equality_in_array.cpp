#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int equalizeArray(vector<int> arr)
{
    int max = 0;
    map<int, int> c;

    for (auto a : arr)
        c[a]++;

    for (auto x : c)
    {
        if (x.second > max)
            max = x.second;
    }

    return arr.size() - max;
}

int main()
{
    cout << equalizeArray({3, 3, 2, 1, 3}) << "\n";
    return 0;
}