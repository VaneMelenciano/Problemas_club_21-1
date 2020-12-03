#include <iostream>

using namespace std;

//https://codeforces.com/problemset/problem/71/A


int main()
{
    int N;
    string palabra;
    cin >> N;
    while (N--)
    {
        cin >> palabra;
        int lon =palabra.length();
        if (lon < 10)
        {
            cout << palabra << endl;
        }
        else
        {
            cout << palabra[0] + to_string(lon-2) + palabra[lon-1] << endl;
        }
    }
    return 0;
}
