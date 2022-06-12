#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string s, int start, int end)
{
    while (start <= end)
        if (s[start++] != s[end--])
            return false;

    return true;
}

string longest_palindrome(string s)
{
    int longest = -1;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        int steps = i + 1;
        int found = s.find(s[i], steps);

        while (found != string::npos)
        {
            if (isPalindrome(s, i, found))
                if (longest < (found - i + 1)){
                    longest = (found - i + 1);
                    result = s.substr(i, found + 1);
                }

            found = s.find(s[i], ++steps);
        }
    }

    return result;
}

int main()
{
    cout << longest_palindrome("abttba") << "\n";
    return 0;
}