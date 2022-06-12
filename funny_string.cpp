#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
string funnyString(string s)
{
    int len = s.length() - 1;

    for (int i = 0; i <= len / 2; i++)
    {
        if (abs(s[i] - s[i + 1]) != abs(s[len - i] - s[len - i - 1]))
            return "Not Funny";
    }

    return "Funny";
}

int main()
{
    cout << funnyString("bcxz") << endl;
    return 0;
}