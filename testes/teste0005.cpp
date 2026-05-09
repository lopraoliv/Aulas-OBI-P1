#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=8, V, M, m;
    int A[n] = {4, 67, 12, 3, 42, 69, 41, 1};
    for(int j=n; j>1; j--){
        M = A[1];
        m = 1;
        for(int i=0; i < j; i++){
            if(A[i] > M){
                M = A[i];
                m = i;
            }
        }
        V = A[m];
        A[m] = A[j-1];
        A[j-1] = V;
    }

    for(int i=0; i < n; i++){
        cout << A[i] << " ";
    }
}