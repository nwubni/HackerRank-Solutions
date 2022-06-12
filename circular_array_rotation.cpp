#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    deque<int> d(a.begin(), a.end());
    vector<int> result;

    while (k)
    {
        int t = d.back();
        d.pop_back();
        d.push_front(t);
        k--;
    }

    for (auto q : queries)
        result.push_back(d[q]);

    return result;
}

int main()
{
    return 0;
}