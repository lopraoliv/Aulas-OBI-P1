#include <bits/stdc++.h>
using namespace std;

int main() {
    // comandos para agilizar entrada/saída
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Digite seu código aqui, por exemplo:
    // cout << "resposta" << endl;
    int N, F, aux=0, m;
    cin >> N >> F;

    int P[N], M[F], A[F][N], s[F];
    for(int i=0; i<N; i++){
        cin >> P[i];
    }
    for(int i=0; i<F; i++){
        M[i] = 0;
        s[i] = 1;
    }
    for(int i=0; i<F; i++){
        A[i][0] = P[i];
        M[i] = M[i] + P[i];
    }
    for(int i=F; i<N; i++){
        m = M[aux];
        for(int j=0; j<aux; j++){
            if(M[j] <= m){
                m = M[j];
                aux = j;
            }
        }
        for(int j=aux; j<F; j++){
            if(M[j] < m){
                m = M[j];
                aux = j;
            }
        }
        M[aux] += P[i];
        A[aux][s[aux]] = P[i];
        s[aux]++;
    }
    for(int i=0; i<F; i++){
        for(int j=0; j<s[i]; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
