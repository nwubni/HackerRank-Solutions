#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
string caesarCipher(string s, int k)
{
    string letters = "abcdefghijklmnopqrstuvwxyz";

    for (char &c : s)
        if (tolower(c) >= 'a' && tolower(c) <= 'z')
            c = isupper(c) ? toupper(letters[((tolower(c) - 'a') + k) % 26]) : letters[((c - 'a') + k) % 26];

    return s;
}

int main()
{
    cout << caesarCipher("Wxyz-aqb", 2) << endl;
    return 0;
}