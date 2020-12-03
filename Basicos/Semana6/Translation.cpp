#include <iostream>

using namespace std;

//https://codeforces.com/problemset/problem/41/A

bool palabras(string p1, string p2){

    int lon_p1 = p1.length();
    int lon_p2 = p2.length();

    for(int i=0, j=lon_p2-1; i<lon_p1, j>=0; i++, j--){
        if(p1[i]!=p2[j]){
            return false;
        }
    }
    return true;
}

int main()
{
    string palabra1, palabra2;
    cin >> palabra1 >> palabra2;

    if(palabras(palabra1, palabra2)==true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
