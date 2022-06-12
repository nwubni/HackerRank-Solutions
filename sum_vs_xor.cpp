#include <iostream>
#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

// SOLUTION
long sumXor(long n)
{
    long count = 1;

    while (n)
    {
        if (n % 2 == 0)
            count *= 2;

        n /= 2;
    }

    return count;
}

int main()
{
    cout << sumXor(5) << endl;
    //  cout << (bitset<8>(7) ^ bitset<8>(7))<< endl;
    return 0;
}