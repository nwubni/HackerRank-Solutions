#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> icecreamParlor(int m, vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
            if (arr[j] + arr[i] == m)
                return {i + 1, j + 1};
    }

    return {};
}

int main()
{
    for (auto x : icecreamParlor(4, {2, 2, 4, 3}))
        cout << x << " ";
    cout << endl;
    return 0;
}