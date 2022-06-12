#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
string fairRations(vector<int> B)
{
    int loaves = 0;

    for (int i = 0; i < B.size(); i++)
    {
        if (B[i] % 2)
        {
            loaves += 2;
            B[(i + 1) % B.size()] += 1;
        }
    }

    if (B[B.size() - 1] % 2)
        return "NO";

    return to_string(loaves);
}

int main()
{
    // cout << fairRations({4, 5, 6, 7}) << endl;
    cout << fairRations({2, 3, 4, 5, 6}) << endl;
    // cout << fairRations({1, 2}) << endl;
    return 0;
}