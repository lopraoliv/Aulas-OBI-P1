#include <bits/stdc++.h>

using namespace std;

bool Achando(int X, int* p, int tam);

int main(void){
    int n;
    cin >> n;

    int L[n];
    for(int i=0; i<n; i++){
        cin >> L[i];
    }

    int X;
    cin >> X;

    int* p = L;

    bool resp = Achando(X, p, n);

    cout << resp << "\n";

    return 0;
}

bool Achando(int X, int* L, int tam){
    if(tam <= 1){
        if(tam == 0){
            return false;
        }else if(L[0] == X){
            return true;
        }else{
            return false;
        }
    }

    int meio = tam/2;

    if(L[meio] == X){
        return true;
    }else if(L[meio] > X){
        return Achando(X, L, meio);
    }else{
        return Achando(X, &L[meio+1], tam-meio-1);
    }
}