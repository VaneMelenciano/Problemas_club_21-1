#include <iostream>

/*
   #
  ##
 ###
####
*/
using namespace std;

//https://www.hackerrank.com/challenges/staircase/problem

int main()
{
    int n, i=0, j=0;
    cin >> n;
    //n-=2; //2
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            //cout << i << " " << j <<" | " ;
            if(i+j>=n-1)
                cout << "#";
            else cout << " ";
        }
        if(i<n-1){ //no dar salto de linea al final
                cout<< endl;
        }
    }
    return 0;
}
