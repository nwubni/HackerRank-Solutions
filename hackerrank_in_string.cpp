#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
string hackerrankInString(string s)
{
    string target = "hackerrank";
    int i = 0;
    for (char x : s)
        if (x == target[i])
            ++i;

    if (i == 10)
        return "YES";

    return "NO";
}

int main()
{

    cout << hackerrankInString("hackerworld") << endl;

    return 0;
}