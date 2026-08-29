#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;
    cin >> N;

    char M[N+1][N+1];

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> M[i][j];
        }
    }

    int E;
    cin >> E;

    int Q[E];
    int C[E][N];

    char res;

    for(int i = 0; i < E; i++){
        cin >> Q[i];

        for(int j = 0; j < Q[i]; j++){
            cin >> C[i][j];
        }

        res = 'N';

        for(int j = 0; j < (Q[i] - 1); j++){
            for(int k = (j+1); k < Q[i]; k++){
                if(M[C[i][j]][C[i][k]] == '1'){
                    res = 'S';
                    break;
                }
            }
            if(res == 'S'){
                break;
            }
        }

        cout << res << "\n";
    }

    return 0;
}