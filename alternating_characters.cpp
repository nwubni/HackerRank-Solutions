#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int alternatingCharacters(string s)
{
    int deletes = 0;
    char t = s[0];

    for (int i = 1; i < s.length(); i++)
    {
        if (t == s[i])
            ++deletes;

        t = s[i];
    }

    return deletes;
}

int main()
{
    cout << alternatingCharacters("AAABBB") << endl;
    return 0;
}