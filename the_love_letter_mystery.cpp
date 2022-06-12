#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int theLoveLetterMystery(string s)
{
    int len = s.length();
    int count = 0;

    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - i - 1])
            count += abs(s[len - i - 1] - s[i]);

    return count;
}

int main()
{
    return 0;
}