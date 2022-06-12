#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//SOLUTION
vector<int> breakingRecords(vector<int> scores)
{
    vector<int> result;
    int best = scores[0], worst = scores[0];
    int best_count = 0, worst_count = 0;

    for(auto x: scores){
        if(x > best){
            best = x;
            ++best_count;
        }

        if (x < worst)
        {
            worst = x;
            ++worst_count;
        }
    }

    result.push_back(best_count);
    result.push_back(worst_count);
    
    return result;
}

int main()
{

    for (auto x : breakingRecords({3, 4, 21, 36, 10, 28, 35, 5, 24, 42}))
        cout << x << endl;
    return 0;
}