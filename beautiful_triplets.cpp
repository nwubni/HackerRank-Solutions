#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

//SOLUTION
int beautifulTriplets(int d, vector<int> arr)
{
    auto available = [&](int val)
    { return binary_search(arr.begin(), arr.end(), val); };

    auto result = count_if(
        arr.begin(), arr.end(),
        [&](int val)
        {
            return available(val + d) && available(val + 2 * d);
        });

    return result;
}

int main()
{

    cout << beautifulTriplets(1, {2, 2, 3, 4, 5}) << endl;
    // cout << 8 / 3 << endl;
    return 0;
}