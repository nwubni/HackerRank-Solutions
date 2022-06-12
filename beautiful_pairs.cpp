#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int beautifulPairs(vector<int> A, vector<int> B)
{
    map<int, int> map_b;
    int b_size = B.size();
    int count = 0;

    for (int b : B)
        map_b[b]++;

    for (int a : A)
        if (map_b[a])
            ++count, --map_b[a];

    if (count < b_size)
        ++count;
    else if (count == b_size)
        --count;

    return count;
}

int main()
{
    // cout << beautifulPairs({3, 5, 7, 11, 5, 8}, {5, 7, 11, 10, 5, 8}) << endl;
    cout << beautifulPairs({1, 2, 3, 4}, {1, 2, 3, 3}) << endl;
    return 0;
}