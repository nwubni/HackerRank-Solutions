#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
void decentNumber(int n)
{
    int m = n;

    while (m % 3 != 0)
        m -= 5;

    if (m < 0)
    {
        cout << -1 << "\n";
        return;
    }

    for (int x = 1; x <= m; x++)
        cout << 5;

    for (int x = 1; x <= (n - m); x++)
        cout << 3;

    cout << "\n";
}

int main()
{
    decentNumber(11);
    return 0;
}