#include <bits/stdc++.h>

using namespace std;

//! Bad way to make it

/*
int main(){
    int a = 5,b = 1, c = 0, initialB = b;
    while (a > b){
        b++;
        c++;
    }
    printf("La resta sin restar de a - b osea %i - %i és %i",a,initialB,c);
    return 0;
}
*/

int subAlg(int a, int b){
    int c = 0;
    if(a < b){
        c = a;
        a = b;
        b = c;
        c = 0;
    }
    while( a > b){
        b++;
        c++;
    }
    return c;
}

int main(){
    printf("5 - 1 = %i",subAlg(5,1));
    return 0;
}