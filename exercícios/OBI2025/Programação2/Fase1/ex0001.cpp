#include <iostream>

using namespace std;

int main(void){
    int E, S, L, dist = 0;
    cin >> E >> S >> L;
    dist = abs(E-S) + abs(S-L) + abs(L-E);
    cout << dist << "\n";
}
//deu certo!!!