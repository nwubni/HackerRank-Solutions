#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// Solution
int migratoryBirds(vector<int> arr)
{
    map<int, int> frequency;

    for (auto x : arr)
    {
        if (frequency.count(x))
            frequency[x]++;
        else
            frequency[x] = 1;
    }

    int ans = max_element(frequency.begin(), frequency.end(), [](const decltype(frequency)::value_type &p1, const decltype(frequency)::value_type &p2)
                          { return p1.second < p2.second; })
                  ->first;

    return ans;
}

int main()
{

    cout << migratoryBirds({1, 4, 4, 4, 5, 3}) << "\n";
    return 0;
}