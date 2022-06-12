#include <iostream>
#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
long flippingBits(long n)
{
    bitset<32> a(bitset<32>(n).to_string());
    string q = "11111111111111111111111111111111";
    bitset<32> b(q);
    a ^= b;

    return  a.to_ulong();
}

int main()
{
    cout << flippingBits(9) << endl;
    return 0;
}