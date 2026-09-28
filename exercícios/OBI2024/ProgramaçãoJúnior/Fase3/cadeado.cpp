#include <bits/stdc++.h>

using namespace std;

int main(){
    int N; tot=0, dist;

    cin >> N;

    int C[N], S[N];

    for(int i=0; i<N; i++){
        cin >> C[i] >> S[i];
        dist  = abs(C[i] - S[i]);
        tot += min(dist, 10-dist);
    }

    cout << tot << "\n";

    return 0;
}