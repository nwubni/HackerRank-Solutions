#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int workbook(int k, vector<int> arr)
{
    int count = 0;
    int page = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 1; j <= arr[i]; j++)
        {
            if (j == page)
                ++count;

            if (j != arr[i] && j % k == 0)
                page++;
        }

        page++;
    }

    return count;
}

int main()
{
    cout << workbook(3, {4, 2}) << endl;

    return 0;
}