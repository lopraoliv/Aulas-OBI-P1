#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, F, l=0;
    cin >> N >> F;
    char M[N+1][N+1];
    for(int i=0; i<=N; i++){
        M[i][0] = '0';
        M[0][i] = '0';
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin >> M[i][j];
        }
    }
    for(int k=0; k<N*N; k++){
        for(int i=1; i<=N; i++){
            for(int j=1; j<=N; j++){
                if(M[i][j] != '*'){
                    l = (int)M[i][j];
                    if((i==1) && (j==1)){
                        if(l < F){
                            M[i][j] = '*';
                        }
                    }else{
                        if((l < F) && (((M[i-1][j] == '*') || (M[i+1][j] == '*')) || ((M[i][j-1] == '*') || (M[i][j+1] == '*')))){
                            M[i][j] = '*';
                        }
                    }
                }
            }
        }
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cout << M[i][j];
        }
        cout << "\n";
    }
}