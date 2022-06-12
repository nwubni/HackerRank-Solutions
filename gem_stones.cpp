#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int gemstones(vector<string> arr)
{
    vector<set<char>> letters;
    set<char> unique;

    for (string val : arr)
    {
        set<char> s;
        for (char c : val)
        {
            s.insert(c);
            unique.insert(c);
        }

        letters.push_back(s);
    }

    int total = 0;

    for (char c : unique)
    {
        int count = 0;
        for (auto letter : letters)
            if (letter.find(c) != letter.end())
                ++count;

        if (count == arr.size())
            ++total;
    }

    return total;
}

int main()
{
    cout << gemstones({"abc", "abc", "bc"}) << endl;
    return 0;
}