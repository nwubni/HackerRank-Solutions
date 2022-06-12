#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumDistances(vector<int> a)
{
    int min_d = -1;

    for (int i = 0; i < a.size(); i++)
    {
        auto f = find(a.begin() + i + 1, a.end(), a[i]);

        if (f != a.end())
        {
            int d = f - a.begin() - i;
            min_d = min_d == -1 ? d : min(d, min_d);
            
        }
    }

    return min_d;
}

int main()
{
    cout << minimumDistances({7, 2, 3, 4, 1, 8}) << "\n";
    return 0;
}