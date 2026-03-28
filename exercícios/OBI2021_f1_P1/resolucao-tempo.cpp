#include <bits/stdc++.h>

using namespace std;

int amigos[101], tempos[101];

int main(void){
    int N, X, tempo = 0;
    char evento;
    bool flag = false;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> evento >> X;

        if(evento == 'T'){
            tempo += X;
            flag = true;
        }else if(flag == true){
            flag = false;
        }else{
            tempo++;
        }

        if(evento == 'R'){
            amigos[X] = tempo;
        }else if(evento == 'E'){
            tempos[X] += tempo - amigos[X];
            amigos[X] = 0;
        }
    }

    for(int i = 1; i<101; i++){
        if(amigos[i] == 0 && tempos[i] != 0){
            cout << i << " " << tempos[i] << "\n";
        }else if(amigos[i] != 0){
            cout << i << " " << "-1\n";
        }
    }
}