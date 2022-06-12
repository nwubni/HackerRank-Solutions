#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int anagram(string s)
{
    if (s.size() % 2 == 1)
        return -1;

    int mid = s.size() / 2;
    int count = 0;

    map<char, int> s1;
    map<char, int> s2;

    for (int i = 0; i < mid; i++)
        s1[s[i]]++, s2[s[s.size() - i - 1]]++;

    for (auto x : s2){
        count += max(s2[x.first] - s1[x.first], 0);
    }

    return count;
}

int main()
{
    cout << anagram("xaxbbbxx") << endl;
    return 0;
}