#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, s=0;

    cin >> N;

    int V[N];

    for(int i=0; i<N; i++){
        cin >> V[i];
    }

    for(int i=0; i<N; i++){
        if(V[i] == 0){
            for(int j=i; j>=0; j--){
                if(V[j] != 0){
                    V[j] = 0;
                    break;
                }
            }
        }
    }
    for(int i=0; i<N; i++){
        s+=V[i];
    }
    cout << s << "\n";
}