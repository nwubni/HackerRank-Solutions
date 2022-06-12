#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int insertionSort(vector<int> arr)
{
    int size = arr.size();
    int shifts = 0;

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
            ++shifts;
        }

        arr[j + 1] = key;
    }

    return shifts;
}

int main()
{
    cout << insertionSort({2, 1, 3, 1, 2}) << endl;
    return 0;
}