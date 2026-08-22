#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, M;

    cin >> N;

    char P[N];

    for(int i=0; i<N; i++){
        cin >> P[i];
    }

    cin >> M;

    char S[M];

    for(int i=0; i<N; i++){
        cin >> S[i];
    }

    int count = 0;

    int menor = min(M, N);

    for(int i=0; i<menor; i++){
        if(P[i] != S[i]){
            break;
        }
        count++;
    }

    cout << count << "\n";

    return 0;
}