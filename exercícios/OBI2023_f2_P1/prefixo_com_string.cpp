#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;

    cin >> N;
    string P;
    cin >> P;

    int M;

    cin >> M;
    string S;
    cin >> S;

    int count = 0;

    int menor = min(S.size(), P.size());

    for(int i=0; i<menor; i++){
        if(P.at(i) != S.at(i)){
            break;
        }
        count++;
    }

    cout << count << "\n";

    return 0;
}