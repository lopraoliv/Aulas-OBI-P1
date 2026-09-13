// A ideia aqui tem a ver com dividir o problema tantas vezes que chegamos em casos triviais
// O código abaixo tem a mesma função do Bubble Sort, mas a ordem será n*log(n), que é menor que n²
// Isso é muito mais eficaz, por exemplo para 100 termos, teremos cerca de 200 operações, muito menos que as 10000 de antes

#include <bits/stdc++.h>

using namespace std;

void Intercala(int* L, int tam);
void MergeSort(int* L, int tam);

int main(void){
    int n;
    cin >> n;

    int L[n];
    for(int i=0; i<n; i++){
        cin >> L[i];   
    }
    int* p = L;

    MergeSort(p, n);

    for(int i=0; i<n; i++){
        cout << L[i] << " ";
    }

    cout << "\n";

    return 0;
}

void Intercala(int* L, int metade, int tam){
    int S[tam];
    int i = 0;
    int j = metade;
    int t = 0;
    while((i < metade) && (j < tam)){
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
    if(i >= metade){
        while(j < tam){
            S[t] = L[j];
            t++;
            j++;
        }
    }else{
        while(i < metade){
            S[t] = L[i];
            t++;
            i++;
        }
    }
    for(i=0; i<tam; i++){
        L[i] = S[i];
    }
    return;
}

void MergeSort(int* L, int tam){
    if(tam == 1){
        return;
    }
    int metade = tam/2;
    MergeSort(L, metade);
    MergeSort(&L[metade], tam-metade);
    Intercala(L, metade, tam);
    return;
}