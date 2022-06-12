#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int pairs(int k, vector<int> arr)
{
    int i = 0, j = 1, count = 0;
    int len = arr.size();

    sort(arr.begin(), arr.end());

    while (j < len)
    {
        int diff = arr[j] - arr[i];

        if (diff == k)
        {
            count++;
            j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else if (diff < k)
        {
            j++;
        }
    }

    return count;
}

int main()
{
    cout << pairs(1, {1, 2, 3, 4}) << endl;
    return 0;
}