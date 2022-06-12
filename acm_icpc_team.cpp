#include <iostream>
#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<int> acmTeam(vector<string> topic)
{
    vector<bitset<500>> b;
    map<int, int> ans;

    int i;
    for (i = 0; i < topic.size(); i++)
        b.push_back(bitset<500>(topic[i]));

    for (i = 0; i < topic.size() - 1; i++)
        for (int j = i + 1; j < topic.size(); j++)
        {
            bitset<500> x = b[i] | b[j];
            ans[x.count()]++;
        }

    return {ans.rbegin()->first, ans.rbegin()->second};
}

int main()
{
    vector<int> ans = acmTeam({"10101", "11100", "11010", "00101"});
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}