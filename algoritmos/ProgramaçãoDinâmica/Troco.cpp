#include <bits/stdc++.h>

using namespace std;

int main(void){
    int T, A, B, C, D, qtd=0, aux1, aux2;
    cin >> T >> A >> B >> C >> D;

    aux1 = T/10;
    aux2 = min(aux1, A);
    qtd+= aux2;
    T-=(10*aux2);

    aux1 = T/5;
    aux2 = min(aux1, B);
    qtd+= aux2;
    T-=(5*aux2);

    aux1 = T/2;
    aux2 = min(aux1, C);
    qtd+= aux2;
    T-=(2*aux2);

    aux2 = min(T, D);
    qtd+= aux2;
    T-= aux2;

    if(T==0){
        cout << "Utiliza-se, no mínimo, " << qtd << " notas.\n";
    }else{
        cout << "Não é possível pagar o troco\n";
    }
    return 0;
}