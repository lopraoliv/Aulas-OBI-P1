#include <bits/stdc++.h>

using namespace std;

// Função Recursiva é uma função que se chama repetidamente até chegar em casos iniciais, é uma ideia fundamental para a divião e conquista

int Fatorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*(Fatorial(n-1));
    }
}
int Fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else if(n==2){
        return 1;
    }else{
        return (Fibonacci(n-1) + Fibonacci(n-2));
    }
}

int main(){
    int N, f, F;
    cin >> N;
    f = Fatorial(N);
    F = Fibonacci(N);
    cout << f << " " << F << "\n";
}