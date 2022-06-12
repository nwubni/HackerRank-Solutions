#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

vector<int> serviceLane(vector<int> width, vector<vector<int>> cases)
{
    int minv;
    vector<int> result;

    for (auto c : cases)
    {
        minv = 10;

        for (int i = c[0]; i <= c[1]; i++)
            minv = min(minv, width[i]);

        result.push_back(minv);
    }

    return result;
}

int main(){
    for (auto x : serviceLane({2, 3, 1, 2, 3, 2, 3, 3}, { { 0, 3 }, { 4, 6 }, { 6, 7 }, { 3, 5 }, { 0, 7 } }))
        cout << x << "\n";
    return 0;
}