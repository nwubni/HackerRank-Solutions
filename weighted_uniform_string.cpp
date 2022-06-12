#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
vector<string> weightedUniformStrings(string s, vector<int> queries)
{
    vector<string> result;
    set<int> weights;
    char prev = s[0];
    int freq = 1;
    
    for (int i = 0; i < s.size(); i++){
        if(s[i] != prev){
            prev = s[i];
            freq = 1;
        }

        weights.insert(freq * ((prev - 'a') + 1));
        freq++;
    }

    for (int q : queries)
    {
        if (weights.find(q) != weights.end())
            result.push_back("Yes");
        else
            result.push_back("No");
    }

    return result;
}

int main()
{
    for (string x : weightedUniformStrings("abbccdddd", {1, 7, 5, 4, 15}))
        cout << x << " ";
    cout << endl;
    return 0;
}