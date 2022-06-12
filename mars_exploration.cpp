#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int marsExploration(string s)
{
    string sos = "SOS";
    int count = 0;

    for (int i = 0; i < s.length(); i++)
        if (s[i] != sos[i % 3])
            ++count;

    return count;
}

int main()
{
    cout << marsExploration("SOSSOT") << endl;
    return 0;
}