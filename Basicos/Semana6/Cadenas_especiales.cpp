#include <iostream>

using namespace std;

//https://omegaup.com/arena/problem/Cadenas-especiales/#problems

bool comprobar_palabra(string p){
    int lon=p.length();
    for(int i=0, j=lon-1; i<lon, j>0; i++, j--){
        if(p[i]!=p[j]){
            return false;
        }
    }
    return true;
}

int main()
{
    string palabra;
    cin>> palabra;
    if(comprobar_palabra(palabra)==true){
        cout << "Si";
    }
    else{
        cout << "No";
    }
    return 0;
}
