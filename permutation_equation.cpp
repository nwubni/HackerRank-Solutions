#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
vector<int> permutationEquation(vector<int> p)
{
    vector<int> result;
    int found;
    int index;

    for (int x = 1; x <= p.size(); x++)
    {
        found = p[x - 1];
        index = distance(p.begin(), find(p.begin(), p.end(), found));

        while (found != x)
        {
            index = distance(p.begin(), find(p.begin(), p.end(), found));
            found = p[found - 1];
        }

        result.push_back(index + 1);
    }

    return result;
}

int main()
{
    return 0;
}