#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
long candies(int n, vector<int> arr)
{
    vector<int> candies(arr.size());

    candies[0] = 1;
    for (int i = 1; i < arr.size(); i++)
        if (arr[i - 1] < arr[i])
            candies[i] = candies[i - 1] + 1;
        else
            candies[i] = 1;

    long sumCandies = candies[arr.size() - 1];
    
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] > arr[i + 1])
            candies[i] = max(candies[i + 1] + 1, candies[i]);
        sumCandies += candies[i];
    }

    return sumCandies;
}

int main()
{
    cout << candies(3, {1, 2, 2}) << endl;
    return 0;
}