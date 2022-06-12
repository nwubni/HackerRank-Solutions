#include <bits/stdc++.h>

using namespace std;


string gridSearch(vector<string> G, vector<string> P)
{
    int found = 0;
    int count;
    int j;

    for (int i = 0; i < G.size();)
    {
        count = 0;
        j = 0;

        while (j < P.size() && G[i + j].substr(found, P[j].length()) == P[j])
            count++, j++;

        if (count == P.size())
            return "YES";

        found++;

        if (found >= G[0].length())
            found = 0, i++;
    }

    return "NO";
}

int main()
{
    vector<string> G, P;
    int t;
    cin >> t;

    while (t--)
    {
        int i1, i2;
        cin >> i1 >> i2;

        string s;

        while (i1--)
        {
            cin >> s;
            G.push_back(s);
        }

        cin >> i1 >> i2;

        while (i1--)
        {
            cin >> s;
            P.push_back(s);
        }

        cout << gridSearch(G, P) << endl;
    }

    return 0;
}
