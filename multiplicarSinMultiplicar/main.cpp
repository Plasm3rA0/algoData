#include <bits/stdc++.h>

using namespace std;

int mulAlg(int a, int b){
    int c = 0;
    if(b > a){
        c = b;
        b = a;
        a = c;
        c = 0;
    }
    while(b > 0){
        b--;
        c+=a;
    }
    return c;
}

int main(){
    printf("La multiplicación sin multiplicar de 8 x 4 = %i",mulAlg(4,8));
    return 0;
}