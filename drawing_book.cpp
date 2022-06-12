#include<iostream>
#include<vector>

using namespace std;

int pageCount(int n, int p)
{
    int l = 0, r = 0;
    if (n % 2 == 0)
        ++n;

    for (int i = 1; i <= n; i += 2){
        if(p > i)
            ++l;
        if(n - i > p)
            ++r;
    }

    return min(l, r);
}

int main(){

    cout << pageCount(5, 4) << "\n";
    return 0;
}