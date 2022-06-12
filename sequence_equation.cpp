#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> permutationEquation(vector<int> p)
{
    vector<int> result;
    int found;
    int index;

    for (int x = 1; x <= p.size(); x++)
    {
        found = p[x - 1];
        index = distance(p.begin(), find(p.begin(), p.end(), found));

        while(found != x)
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
    // vector<int> r = permutationEquation({2, 3, 1});
    // vector<int> r = permutationEquation({5, 2, 1, 3, 4});
    vector<int> r = permutationEquation({4, 3, 5, 1, 2});

    for (auto v : r)
        cout << v << "\n";

    return 0;
}