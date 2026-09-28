#include <bits/stdc++.h>

using namespace std;

const int Fmax = 100000;
const int Nmax = 100000;
int M[Fmax][Nmax];
int Ptotal[Fmax];
int Index[Fmax];
int P[Nmax];

int main(void){
    int N, F;

    cin >> N >> F;

    for(int i=0; i<N; i++){
        cin >> P[i];
        M[i][0] = P[i];
        Ptotal[i] += P[i];
        Index[i]++;
    }
    
    int i, k;
    for(int j=F; j<N; j++){
        auto res = min_element(Ptotal.begin(), Ptotal.begin() + N);
        auto i = distance(Ptotal.begin(), res);
        M[i][Index[i]] = P[i];
        Ptotal[i] += P[i];
        Index[i]++;
    }
    for(int j = 0; j<F; j++){
        k=0;
        while(M[j][k] < Index[j]){
            cout << M[j][k] << " ";
            k++;
        }
    }
}