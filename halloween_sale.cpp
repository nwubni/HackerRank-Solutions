#include<iostream>

using namespace std;

int howManyGames(int p, int d, int m, int s)
{
    int count = 0;

    while (p > 0 && s >= p)
    {
        s -= p;

        if (p - d > m)
            p -= d;
        else
            p = m;
            
        ++count;
    }

    return count;
}

int main(){
    cout << howManyGames(20, 3, 6, 70) << "\n";
    return 0;
}