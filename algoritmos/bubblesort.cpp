#include <bits/stdc++.h>

using namespace std

int main(void){
    int N, aux;
    cin >> N;

    int V[N];
    for(int i=0; i<n; i++){
        cin >> V[i];
    }
    // O Bubble Sort é um algoritmo que serve para ordenar os termos de um vetor do menor para o maior
    for(int i=(N-1); i>=1; i--){
        for(int j=0; j<i; j++){
            if(L[j] > L[j+1]){
                aux = L[j];
                L[j] = L[j+1];
                L[j+1] = aux;
            }
        }
    }
    // Perceba que para cada valor de i, ele encontra o maior termo, ou seja, V[i] se torna o maior de V[0] a V[i]
    // No entanto, esse algoritmo não é muito eficiente, sua ordem é n², ou seja, para 100 termos, faremos cerca de 10000 operações
}