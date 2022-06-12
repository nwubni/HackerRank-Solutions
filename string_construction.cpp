#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int stringConstruction(string s)
{
    set<char> p;

    for(char c: s)
        p.insert(c);

    return p.size();
}

int main()
{
    cout << stringConstruction("abab") << endl;
    return 0;
}