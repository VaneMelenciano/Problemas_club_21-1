#include <iostream>
 
using namespace std;
 
//https://codeforces.com/problemset/problem/546/A
 
int main()
{
    int k, n , w;
    cin >> k >> n>> w;
    long long int r=0;
    for(int i=1; i<=w; i++){
        r+=k*i;
    }
    long int dinero = n-r;
    if(dinero>=0){
        cout << "0";
    }
    else{
        cout << abs(n-r);
    }
    return 0;
}
