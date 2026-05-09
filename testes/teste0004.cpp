#include <bits/stdc++.h>

using namespace std;

int main(){
    int A[7] = {2, 5, 20, 200, 4, 60, 22};
    int V;

    for(int j=0; j < 6; j++){
        for(int i=0; i< 7-j; i++){
            if(A[i] > A[i+1]){
                V = A[i];
                A[i] = A[i+1];
                A[i+1] = V;
            }
        }
    }
    for(int i=0; i < 7; i++){
        cout << A[i] << "\n";
    }
    return 0;
    
}