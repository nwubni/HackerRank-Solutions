#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
string pangrams(string s)
{

    string abc = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;

    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c)
              { return std::tolower(c); });
    sort(s.begin(), s.end());

    cout << s << endl;
    for (char x : s)
    {
        if (x == abc[i])
            ++i;
    }

    if (i == 26)
        return "pangram";

    return "not pangram";
}

int main()
{
    cout << pangrams("All of the letters of the alphabet are present in the string.") << endl;
    return 0;
}