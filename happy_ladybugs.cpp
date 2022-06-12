#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION

bool match(string b)
{
    char cur;
    int count;

    for (int i = 0; b[i] != '_' && i < b.length(); i++)
    {
        cur = b[i];
        count = 1;

        while (b[i + 1] == cur && i < b.length())
        {
            count++;
            i++;
        }

        if (count == 1)
            return false;
    }

    return true;
}

string happyLadybugs(string b)
{
    string ans[] = {"NO", "YES"};

    if (b.find('_') == string::npos)
        return ans[match(b)];

    bool str_sorted = is_sorted(b.begin(), b.end());
    sort(b.begin(), b.end());

    if (!match(b) || (b[b.length() - 1] != '_' && !str_sorted))
        return ans[0];

    return ans[1];
}

int main()
{
    cout << happyLadybugs("XZY_YZX") << "\n";
    return 0;
}