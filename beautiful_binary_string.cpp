#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
int beautifulBinaryString(string b)
{
    string str = "010";
    int count = 0;
    int len = b.length();
    auto found = b.find(str);

    while (found != string::npos)
    {
        ++count;

        if (found + str.size() - 1 < len)
            found = b.find(str, found + str.size());
        else
            found = len;
    }

    return count;
}

int main()
{
    return 0;
}