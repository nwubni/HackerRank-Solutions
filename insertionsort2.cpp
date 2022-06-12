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
    int j;

    for (int i = 1; i < n; i++)
    {
        x = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = x;

        for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
        cout << "\n";
    }
}

int main()
{
    insertionSort1(7, {3,4,7,5,6,2,1});
    return 0;
}