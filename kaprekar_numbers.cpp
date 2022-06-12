#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

bool isKaprekar(int n)
{
    if (n == 1)
        return true;
    if (n < 9)
        return false;

    string num = to_string(long(n) * long(n));
    string l, r;
    int i = num.length() / 2;
    l = num.substr(0, i);
    r = num.substr(i);

    return (stoi(l) + stoi(r) == n);
}

//SOLUTION
void kaprekarNumbers(int p, int q)
{
    int count = 0;
    while (p <= q)
    {
        if (isKaprekar(p)){
            cout << p << " ";
            ++count;
        }

        p++;
    }

    if(count == 0)
        cout << "INVALID RANGE";
}

int main()
{
    kaprekarNumbers(1, 100);

    cout << "\n";
    return 0;
}