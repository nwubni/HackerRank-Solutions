#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

// SOLUTION
vector<int> absolutePermutation(int n, int k)
{
    vector<int> v;
    int x = 0;
    int j = 1;

    for (int i = 1; x <= n && i <= n; i++)
    {
        if (j <= k)
            x = k + i;
        else
            x = i - k;

        v.push_back(x);

        j = ((j + 1) > k * 2) ? 1 : j + 1;
    }

    if (x > n)
        return {-1};

    return v;
}

int main()
{
    int i = 1;
    vector<int> r = absolutePermutation(100, 2);
    for (auto x : r)
    {
        cout << x << " ";
        if (i % 30 == 0)
            cout << endl;

        i++;
    }
    cout << endl;
    return 0;
}