#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int birthday(vector<int> s, int d, int m)
{
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
            sum += s[i + j];

        if (sum == d)
            ++count;
    }

    return count;
}

int main()
{
    cout << birthday({4}, 4, 1) << "\n";
    return 0;
}