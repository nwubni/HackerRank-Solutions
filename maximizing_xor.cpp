#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int maximizingXor(int l, int r)
{
    set<int> m;
    int max_val = 0;

    for (int i = l; i <= r; i++)
    {
        for (int j = i + 1; j <= r; j++)
            max_val = max(max_val, (i ^ j));
    }

    return max_val;
}

int main()
{
    cout << maximizingXor(10, 15) << endl;
    return 0;
}