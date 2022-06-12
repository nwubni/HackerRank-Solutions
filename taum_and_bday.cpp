#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
long taumBday(int b, int w, int bc, int wc, int z)
{
    return b * min(bc, wc + z) + w * min(wc, bc + z);
}

int main()
{
    return 0;
}