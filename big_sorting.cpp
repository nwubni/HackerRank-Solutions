#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
vector<string> bigSorting(vector<string> unsorted)
{
    sort(unsorted.begin(), unsorted.end(), [](string &a, string &b)
         { return stoll(a) < stoll(b); });
    return unsorted;
}

int main()
{
    vector<string> x = bigSorting({"18273"});
    return 0;
}