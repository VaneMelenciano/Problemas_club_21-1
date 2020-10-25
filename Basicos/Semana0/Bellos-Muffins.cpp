#include <iostream>

using namespace std;
//https://omegaup.com/arena/problem/Bellos-Muffins/#problems
int main()
{
    int m, p;
    cin >> m;
    cin >> p;
    int res=m%p;
    int pp=m/p;
    int gil=res+pp;
    cout << gil;


}
