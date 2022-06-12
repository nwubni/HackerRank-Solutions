#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] >= 38 && (5 - (grades[i] % 5) < 3))
            grades[i] += 5 - (grades[i] % 5);
    }

    return grades;
}

int main()
{

    vector<int> g = gradingStudents(vector<int>{73, 67, 38, 33});
    for (auto v : g)
        cout << v << "\n";
    // cout << 73 % 5 << "\n";
    return 0;
}