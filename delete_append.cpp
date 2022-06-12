#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string appendAndDelete(string s, string t, int k)
{
    int L = t.length() + s.length();
    int i;
    for (i = 0; s[i] == t[i]; i++);
    
    return (L <= k + i * 2 && L % 2 == k % 2 || L < k ? "Yes" : "No");
}

int main()
{

    cout << appendAndDelete("aba", "aba", 7) << "\n";
    return 0;
}