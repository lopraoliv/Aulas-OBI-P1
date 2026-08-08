#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    if(M >= 5*N - 4){
        cout << "S\n";
    }else{
        cout << "N\n";
    }

    return 0;
}