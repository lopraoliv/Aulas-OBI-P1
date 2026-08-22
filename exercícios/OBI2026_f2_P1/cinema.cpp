#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, M, C, a=0; 
    cin >> N >> M >> C;
    int T[N+1], H[M+1], Q[M+1];
    for(int i=1; i<=N; i++){
        cin >> T[i];
    }
    for(int i=1; i<=M; i++){
        cin >> H[i];
        Q[i] = 0;
    }
    for(int i=1; i<=N; i++){
        for(int j=a; j<=M; j++){
            if((T[i] <= H[j]) && (Q[j] < C)){
                Q[j]++;
                break;
            }else{
                a++;
            }
        }
    }
    for(int i=1; i<=M; i++){
        cout << Q[i] << " ";
    }
    return 0;
}