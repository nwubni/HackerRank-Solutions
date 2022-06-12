#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
string twoArrays(int k, vector<int> A, vector<int> B)
{
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());

    for (int i = 0; i < A.size(); i++)
        if (A[i] + B[i] < k)
            return "NO";

    return "YES";
}

int main()
{
    cout << twoArrays(5, {1, 2, 2, 1}, {3, 3, 3, 4}) << endl;
    return 0;
}