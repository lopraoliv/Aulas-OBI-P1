#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, x, y=0;

    cin >> N;

    char c[N];
    int a[N], T[101];

    for(int i=0; i<101; i++){
        T[i] = 0;
    }
    for(int i=0; i<N; i++){
        cin >> c[i] >> a[i];
    }

    for(int i=0; i<N; i++){
        if(c[i] == 'R'){
            x = a[i];

            for(int j=i+1; j<N; j++){
                y=0;

                if(c[j] == 'T'){
                    T[x] += a[j];
                    continue;
                }
                if(c[j-1] != 'T'){
                    T[x]++;
                }

                if(c[j] == 'E'){
                    if(a[j] == a[i]){
                        y=1;
                        break;
                    }
                }
            }

            if(y==0){
                T[x] = -1;
            }
        }
    }
    for(int X=1; X<101; X++){
        for(int i=0; i<N; i++){
            y=0;
            if(c[i] == 'T'){
                continue;
            }else if(a[i] == X){
                y = 1;
                break;
            }
        }
        if(y==1){
            cout << X << " " << T[X] << "\n";
        }
    }
    return 0;
}