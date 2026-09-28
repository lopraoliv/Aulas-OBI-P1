#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, maior=0, aux, a;
    cin >> N;

    int A[N+1];
    for(int i=1; i<=N; i++){
        cin >> A[i];
    }

    for(int j=N; j>maior; j--){
        aux = 0;
        if(A[j] > 0){
            aux++;
            for(int b=1; b<j; b++){
                a = (1 + j - b);
                if(a <= A[b]){
                    aux++;
                }
            }
        }
        maior = max(maior, aux);
    }

    cout << maior << "\n";

    return 0;
}