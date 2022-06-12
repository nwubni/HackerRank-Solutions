#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int minimumNumber(int n, string password)
{
    map<string, int> requirements = {{"num", 0}, {"lower", 1}, {"upper", 2}, {"punc", 3}};
    vector<int> a;
    a.assign(4, 0);

    int len = password.length();
    int missing = 0;

    for (char c : password)
    {
        if (isdigit(c) && !a[requirements["num"]])
            a[requirements["num"]] = 1;
        else if (ispunct(c) && !a[requirements["punc"]])
            a[requirements["punc"]] = 1;
        else if (islower(c) && !a[requirements["lower"]])
            a[requirements["lower"]] = 1;
        else if (isupper(c) && !a[requirements["upper"]])
            a[requirements["upper"]] = 1;
    }

    for (auto x : a)
        if (!x)
            missing++;

    return max(missing, 6 - len);
}

int main()
{
    // cout << minimumNumber(11, "#HackerRank") << endl;
    // cout << minimumNumber(11, "2bbbb") << endl;
    // cout << minimumNumber(11, "2bb#A") << endl;
    cout << minimumNumber(11, "Ab1") << endl;
    return 0;
}