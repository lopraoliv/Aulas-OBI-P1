#include <bits/stdc++.h>

using namespace std;

int main(void){
    string m;
    int t=0, c=0, d=0;

    getline(cin, m);

    t = m.size();

    for(int i=0; i<(t-2); i++){
        if(((m[i] == ':') && (m[i+1] == '-')) && (m[i+2] == ')')){
            d++;
        }else if(((m[i] == ':') && (m[i+1] == '-')) && (m[i+2] == '(')){
            c++;
        }
    }
    if((d-c) == 0){
        cout << "neutro\n";
    }else if((d-c) > 0){
        cout << "divertido\n";
    }else{
        cout << "chateado\n";
    }
}