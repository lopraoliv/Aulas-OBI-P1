#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, Dec, Cre, I;
    
    cin >> N;

    I = N;

    int D[4];

    do{
        N = I;
        cout << N << "\n";

        D[0] = N%10;
        D[1] = (N%100)/10;
        D[2] = (N%1000)/100;
        D[3] = N/1000;

        sort(D, D+4); // ordena em ordem crescente

        Dec = D[0] + 10*D[1] + 100*D[2] + 1000*D[3];
        Cre = D[3] + 10*D[2] + 100*D[1] + 1000*D[0];

        I = Dec - Cre;
    }while(I > N);
}