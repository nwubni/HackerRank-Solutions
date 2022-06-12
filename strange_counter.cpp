#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
long strangeCounter(long t)
{
    long i = 3;

    while (i <= t)
        i *= 2;

    i -= 2;

    if (i > t)
        i = (i - 2) / 2;

    long j = i + 2;

    while (i < t)
    {
        j--;
        i++;
    }

    return j;
}

int main()
{

    cout << strangeCounter(15) << endl;
    return 0;
}