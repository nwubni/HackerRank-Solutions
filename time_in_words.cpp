#include <iostream>
#include <vector>

using namespace std;

string timeInWords(int h, int m)
{
    vector<string> nums({"", "one", "two", "three", "four", "five", "six", "seven",
                         "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter",
                         "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two",
                         "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven",
                         "twenty eight", "twenty nine", "half"});

    int tm = m > 30 ? 60 - m : m;

    string clock_time;

    if (m == 0)
        clock_time = " o\' clock";
    else 
        clock_time = nums[tm];

    if (m == 1 || 60 - m == 1)
        clock_time += " minute";
    else if (m > 1 && m != 15 && m != 30 && m != 45)
        clock_time += " minutes";

    if (m > 30)
        clock_time += " to";
    else if (m > 0)
        clock_time += " past";

    if (m == 0)
        clock_time = nums[h] + clock_time;
    else
        clock_time += " " + ((m > 30) ? nums[h + 1] : nums[h]);

    return clock_time;
}

int main()
{
    cout << timeInWords(5, 28) << "\n";
    return 0;
}