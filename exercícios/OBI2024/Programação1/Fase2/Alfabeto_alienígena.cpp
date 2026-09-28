#include <bits/stdc++.h>

using namespace std;

int main(void){
    int K, N;
    cin >> K >> N;

    string alfabeto, mensagem;
    cin >> alfabeto >> mensagem;

    bool error = false;

    for(int i=0; i < mensagem.size(); i++){
        if(alfabeto.find(mensagem.at(i)) == -1){
            error = true;
            break;
        }
    }
    
    if(error == true){
        cout << "N" << "\n";
    }else{
        cout << "S" << "\n";
    }

    return 0;
}