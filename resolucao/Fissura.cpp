#include <bits/stdc++.h>

using namespace std;

int N, F;

const int MAX = 500;

int M[MAX][MAX];

// tipo_retorno nome_func(tipo argumento1, tipo argumento 2, ...)
void invade(int i, int j);

int main(void){
    cin >> N >> F;

    for(int i=0; i<N; i++){
        for(int j=0, j<N; j++){
            cin >> M[i][j]
        }
    }

    if((int)M[0][0] <= F){
        M[0][0] = '*';
        invade(0, 0);
    }
    for(int i=0; i<N; i++){
        for(int j=0, j<N; j++){
            cout >> M[i][j];
        }
    }

    return 0;
}

void invade(int i, int j){
    bool n = false, s = false, l = false, o = false;

    if(i != 0){
        if(M[i-1][j] != '*' && (int)M[i-1][j] < F){
            M[i-1][j] = '*';
            n = true;
        }
    }
    if(j != 0){
        if(M[i][j-1] != '*' && (int)M[i][j-1] < F){
            M[i][j-1] = '*';
            o = true;
        }
    }
    if(i != (N-1)){
        if(M[i+1][j] != '*' && (int)M[i+1][j] < F){
            M[i+1][j] = '*';
            s = true;
        }
    }
    if(j != (N-1)){
        if(M[i][j+1] != '*' && (int)M[i][j+1] < F){
            M[i][j+1] = '*';
            l = true;
        }
    }

    if(n == true){
        invade(i-1, j);
    }
    if(o == true){
        invade(i, j-1);
    }
    if(s == true){
        invade(i+1, j);
    }
    if(o == true){
        invade(i, j+1);
    }
    return;
}