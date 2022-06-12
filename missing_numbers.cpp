#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
    map<int, int> arr_map;
    map<int, int> brr_map;
    vector<int> result;

    for (int x : arr)
        arr_map[x]++;

    for (int x : brr)
        brr_map[x]++;

    for (auto x : brr_map)
        if (x.second != arr_map[x.first])
            result.push_back(x.first);

    return result;
}

int main()
{
    for (auto x : missingNumbers({203, 204, 205, 206, 207, 208, 203, 204, 205, 206}, {203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204}))
        cout << x << " ";
    cout << endl;
    return 0;
}