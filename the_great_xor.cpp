#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

// SOLUTION
long theGreatXor(long x)
{
    return (pow(2, 64 - __builtin_clzll(x)) - x - 1);
}

int main()
{
    cout << theGreatXor(4);
    return 0;
}