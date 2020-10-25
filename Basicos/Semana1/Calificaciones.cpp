#include <iostream>
#include <bits/stdc++.h>

//https://omegaup.com/arena/problem/Calificaciones-cbtis/#problems/Calificaciones-cbtis
using namespace std;

int main()
{
    float c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    float promedio = (c1+c2+c3)/3;
    if(promedio < 6){
        cout << "0";
    }
    else{
        cout << "1";
    }
    return 0;
}
