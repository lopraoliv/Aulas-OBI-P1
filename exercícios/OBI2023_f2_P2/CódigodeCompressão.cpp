#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;

    cin >> N;

    char arr[N];

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    char c;
    int i=0, tam;

    while(i < N){
        c = arr[i];
        tam = 0;

        while((i < N) && (arr[i] = c)){
            tam++;
            i++;
        }

        cout << tam << ' ' << c << ' ';
    }

    return 0;
}