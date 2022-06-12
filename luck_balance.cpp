#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int luckBalance(int k, vector<vector<int>> contests)
{
    int balance = 0;
    sort(contests.begin(), contests.end(), [](const std::vector<int> &a, const std::vector<int> &b)
         { return a[0] > b[0]; });

    for (auto x : contests)
    {
        if (k > 0 && x[1] == 1)
        {
            balance += x[0];
            --k;
        }
        else if (x[1] == 1)
        {
            balance -= x[0];
        }
        else
        {
            balance += x[0];
        }
    }

    return balance;
}

int main()
{
    cout << luckBalance(3, {{5, 1}, { 2, 1 }, { 1, 1 }, { 8, 1 }, { 10, 0 }, { 5, 0 }}) << endl;
    return 0;
}