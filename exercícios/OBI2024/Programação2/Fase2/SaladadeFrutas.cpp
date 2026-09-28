#include <bits/stdc++.h>

using namespace std;

int table[101];

int main(void){
    int R, N;

    cin >> R >> N;

    int T, P;

    for(int i = 0; i<N; i++){
        cin >> T >> P;

        if(table[T] == 0){
            table[T] = P;
        }else if(P < table[T]){
            table[T] = P;
        }
    }

    vector<int> vec;

    for(int i = 1; i < 101; i++){
        if(table[i] != 0){
            vec.push_back(table[i]);
        }
    }

    sort(vec.begin(), vec.end());

    int qtd = 0;

    for(int i = 0; i < vec.size(); i++){
        if(vec[i] < R){
            qtd++;
            R-= vec[i];
        }else{
            break;
        }
    }

    cout << qtd << "\n";

    return 0;
}