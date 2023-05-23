#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 5,b = 1, c = 0, initialB = b;
    while (a > b){
        b++;
        c++;
    }
    printf("La resta sin restar de a - b osea %i - %i és %i",a,initialB,c);
    return 0;
}