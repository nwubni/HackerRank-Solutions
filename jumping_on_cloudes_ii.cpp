#include <iostream>
#include <vector>

using namespace std;

int jumpingOnClouds(vector<int> c, int k)
{
    int e = 100;
    int i = k % c.size();

    while (i != 0)
    {
        e = e - 1 - 2 * c[i];
        i = (i + k) % c.size();
    }

    e = e - 1 - 2 * c[i];

    return e;
}

int main()
{
    int k = 2;
    // vector<int> c = {1, 1, 1, 0, 1, 1, 0, 0, 0, 0};
    // vector<int> c = {0, 0, 1, 0, 0, 1, 1, 0};
    vector<int> c = {0, 0, 1, 0};
    cout << jumpingOnClouds(c, k) << "\n";
    return 0;
}