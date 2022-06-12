#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int getTotalX(vector<int> a, vector<int> b)
{
    int upper = *max_element(b.begin(), b.end());
    int lower = *min_element(a.begin(), a.end());
    int available = 0;
    int count;

    while (upper >= lower)
    {
        count = 0;

        for (auto x : b)
        {
            if (x % upper != 0)
                break;

            ++count;
        }

        if (count == b.size())
        {
            count = 0;
            for (auto x : a)
            {
                if (upper % x != 0)
                    break;

                ++count;
            }

            if (count == a.size())
                ++available;
        }

        upper--;
    }

    return available;
}

int main()
{

    cout << getTotalX({2, 4}, {16, 32, 96}) << endl;
    return 0;
}