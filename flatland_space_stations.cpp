#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int flatlandSpaceStations(int n, vector<int> c)
{
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int min = abs(i - c[0]);

        for (int j = 1; j < c.size(); j++)
            if (min > abs(i - c[j]))
                min = abs(i - c[j]);

        s.insert(min);
    }

    if (s.size())
    {
        auto it = s.end();
        it--;
        return *it;
    }

    return 0;
}

int main()
{
    cout << flatlandSpaceStations(5, {0, 4}) << endl;
    return 0;
}