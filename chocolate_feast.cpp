#include <iostream>

using namespace std;

int chocolateFeast(int n, int c, int m)
{
    int w = n / c;
    int count = w + w / m;

    while (w >= m)
    {
        w = (w / m) + (w % m);
        count += w / m;
    }

    return count;
}

int main()
{
    cout << chocolateFeast(15, 3, 2) << "\n";
    return 0;
}