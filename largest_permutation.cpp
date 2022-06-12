#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> largestPermutation(int k, vector<int> arr)
{

    map<int, int> m;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        m[arr[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        if (k == 0)
            break;
            
        if (arr[i] != n - i)
        {
            int j = m[n - i];
            m[arr[i]] = j;
            swap(arr[i], arr[j]);
            k--;
        }
    }

    return arr;
}

// vector<int> largestPermutation(int k, vector<int> arr)
// {
//     for (int i = 0; k && i < arr.size() - 1; i++)
//     {
//         int max_index = i;
//         for (int j = i + 1; j < arr.size(); j++)
//             if (arr[j] > arr[i])
//                 max_index = j;

//         if (max_index != i)
//             swap(arr[i], arr[max_index]), k--;
//     }

//     return arr;
// }

int main()
{
    for (int x : largestPermutation(2, {3, 4, 2, 5, 1}))
        cout << x << " ";
    cout << "\n";
    return 0;
}