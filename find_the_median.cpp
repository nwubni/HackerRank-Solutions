#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int findMedian(vector<int> arr)
{
    int count = arr.size() - 1;
    int mid = count / 2;

    sort(arr.begin(), arr.end());

    if (count % 2 == 0)
        return arr[mid];

    return (arr[mid] + arr[mid + 1]) / 2;
}

int main()
{

    return 0;
}