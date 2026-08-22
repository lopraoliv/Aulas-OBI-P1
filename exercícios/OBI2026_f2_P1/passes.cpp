#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, Pa = 0, Pb = 0;
    cin >> N;

    int T[N+1];
    for(int i=1; i<=N; i++){
        cin >> T[i];
    }
    for(int i=1; i<N; i++){
        if(T[i] != T[i+1]){
            if((T[i] > 0) && (T[i+1] > 0)){
                Pa++;
            }else if((T[i] < 0) && (T[i+1] < 0)){
                Pb++;
            }
        }
    }
    cout << Pa << "\n" << Pb << "\n";
}