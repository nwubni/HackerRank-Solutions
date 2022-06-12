#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int makingAnagrams(string s1, string s2)
{
    map<char, int> s1_m;
    map<char, int> s2_m;

    for (int i = 0; i < s1.length(); i++)
        s1_m[s1[i]]++;

    for (int i = 0; i < s2.length(); i++)
        s2_m[s2[i]]++;

    int count1 = 0, count2 = 0;
    for (auto x : s1_m)
        count1 += abs(x.second - s2_m[x.first]);
    for (auto x : s2_m)
        count2 += abs(x.second - s1_m[x.first]);

    return max(count1, count2);
}

int main()
{
    cout << makingAnagrams("absdjkvuahdakejfnfauhdsaavasdlkj", "djfladfhiawasdkjvalskufhafablsdkashlahdfa") << endl;

    // cout << makingAnagrams("cde", "abc") << endl;
    return 0;
}