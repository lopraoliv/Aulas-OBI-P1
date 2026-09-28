#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, r=0;
    cin >> N;

    int a[N], b[N];
    for(int i=0; i<N; i++){
        cin >> a[i];
        b[i] = 0;
    }

    sort(a, a+N);

    for(int i=1; i<N; i++){
        if((a[i-1] == a[i]) && (b[i-1] == 0)){
            r++;
            b[i-1] = 1;
            b[i] = 1;
        }
    }

    cout << r << "\n";

    return 0;
}