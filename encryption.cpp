#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

//SOLUTION
string encryption(string s)
{
    int col = ceil(sqrt(s.length()));
    string result = "", output;

    for (int i = 0; i < col; i++)
    {
        output = "";

        for (int j = i; j < s.length(); j += col)
            output += s[j];
        result += output + " ";
    }

    result.pop_back();

    return result;
}

int main()
{
    cout << encryption("chillout") << "\n";
    return 0;
}