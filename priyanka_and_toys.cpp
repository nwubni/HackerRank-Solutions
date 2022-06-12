#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int toys(vector<int> w)
{
    int containers = 0;
    sort(w.begin(), w.end());
    int minimum = w[0];

    for (int i = 0; i < w.size(); i++)
    {
        while ((i + 1) < w.size() && w[i + 1] <= minimum + 4)
            i++;
        minimum = w[i + 1];
        containers++;
    }

    return containers;
}

int main()
{
    cout << toys({1, 2, 3, 21, 7, 12, 14, 21}) << endl;
    return 0;
}