#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

char first_recurring(string str)
{
    set<char> s;
    for (auto c : str)
    {
        if (s.find(c) != s.end())
            return c;
        else
            s.insert(c);
    }

    return '\0';
}

int main()
{
    string str = "ABBA";

    char c = first_recurring(str);
    cout << c << "\n";

    return 0;
}