#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
// string biggerIsGreater(string w)
// {
//     for (int i = w.length() - 1; i > 0; i--)
//         for (int j = i - 1; j >= 0; j--)
//             if (w[j] - w[i] < 0)
//             {
//                 string t = w;
//                 t.insert(j, string(1, t[i]));
//                 t.erase(t.begin() + i + 1);

//                 sort(t.begin() + j + 1, t.end());

//                 if (t > w)
//                     return t;
//             }

//     return "no answer";
// }

string biggerIsGreater(string w)
{
    if (next_permutation(w.begin(), w.end()))
        return w;

    return "no answer";
}

int main()
{
    cout << biggerIsGreater("lmno") << "\n";
    return 0;
}