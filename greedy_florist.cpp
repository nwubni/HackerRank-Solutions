#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int getMinimumCost(int k, vector<int> c)
{
    int n = c.size(), price = 0, prev = 0;

    sort(c.begin(), c.end(), [](int &a, int &b)
         { return a > b; });

    for (int i = 0, j = k - 1; i < n; i++)
    {
        price += c[i] * (prev + 1);

        if (i == j)
            prev++, j += k;
    }

    return price;
}

int main()
{
    cout << getMinimumCost(3, {1, 2, 3, 4}) << endl;
    return 0;
}