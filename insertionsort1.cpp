#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
void insertionSort1(int n, vector<int> arr)
{
    int x;
    int j, k;

    for (int i = n - 1; i < n; i++)
    {
        x = arr[n - 1];
        j = i - 1;
        while (j >= 0 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
            for (k = 0; k < n; k++)
                cout << arr[k] << " ";
            cout << "\n";
        }

        arr[j + 1] = x;

        for (k = 0; k < n; k++)
            cout << arr[k] << " ";
    }
}

int main()
{
    insertionSort1(5, {2, 4, 6, 8, 3});
    return 0;
}