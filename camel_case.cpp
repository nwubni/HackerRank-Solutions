#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
int camelcase(string s)
{
    int count = 1;

    for (char c : s)
        if (isupper(c))
            ++count;

    return count;
}

int main()
{
    return 0;
}