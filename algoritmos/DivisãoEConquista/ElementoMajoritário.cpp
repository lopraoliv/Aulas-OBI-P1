#include <bits/stdc++.h>

using namespace std;

void Intercala(int* L, int meio, int tam);
void MergeSort(int* L, int tam);

int main(void){
    int n, m=0, aux1=0, j=0, aux2;
    cin >> n;

    int L[n];
    for(int i=0; i<n; i++){
        cin >> L[i];
    }

    int* p = L;

    MergeSort(p, n);

    for(int i=0; i<n; i++){
        if(L[j] == L[i]){
            aux1++;
        }else{
            if(aux1 > m){
                m = aux1;
                aux2 = L[j];
            }
            j=i;
            aux1=0;
        }
    }
    if(aux1 > m){
        aux2 = L[j];
        m = aux1;
    }
    if(m >= (n+1)/2){
        cout << "Sim, há um elemento majoritário, ele é: " << aux2 << "\n";
    }else{
        cout << "Não há um elemento majoritário\n";
    }
    return 0;
}

void Intercala(int* L, int meio, int tam){
    int S[tam];
    int i=0;
    int j=meio;
    int t=0;
    while((i < meio) && (j < tam)){
        if(L[i] >= L[j]){
            S[t] = L[j];
            t++;
            j++;
        }else{
            S[t] = L[i];
            t++;
            i++;
        }
    }
    if(i >= meio){
        while(j < tam){
            S[t] = L[j];
            t++;
            j++;
        }
    }else{
        while(i < meio){
            S[t] = L[i];
            t++;
            i++;
        }
    }
    for(t = 0; t<tam; t++){
        L[t] = S[t];
    }
    return;
}

void MergeSort(int* L, int tam){
    if(tam == 1){
        return;
    }
    int meio = tam/2;
    MergeSort(L, meio);
    MergeSort(&L[meio], tam-meio);
    Intercala(L, meio, tam);
    return;
}