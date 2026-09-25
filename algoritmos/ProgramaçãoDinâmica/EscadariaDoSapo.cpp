#include <bits/stdc++.h>

using namespace std;

int Escadaria(int a);

int main(void){
    int N;
    cin >> N;

    int E;
    E = Escadaria(N);
    cout << E << "\n";

    return 0;
}

int Escadaria(int a){
    if(a==1){
        return 1;
    }
    if(a==2){
        return 2;
    }
    return (Escadaria(a-1) + Escadaria(a-2));
}