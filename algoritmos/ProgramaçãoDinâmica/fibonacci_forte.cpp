#include <bits/stdc++.h>

using namespace std;

long long int Fib(int n);
long long int Fibonacci(int n, long long int* p);

int main(void){
    int n;
    long long f;
    cin >> n;

    f = Fib(n);
    cout << f << "\n";
    return 0;
}

long long int Fib(int n){
    long long int memo[n+1];
    memo[0] = 0;
    memo[1] = 1;
    for(int i=2; i<=n; i++){
        memo[i] = 0;
    }
    long long int* p = memo;
    return Fibonacci(n, p);
}
long long int Fibonacci(int n, long long int* p){
    if((n == 0) || (n == 1)){
        return n;
    }else{
        if(p[n] == 0){
            p[n] = Fibonacci(n-1, p) + Fibonacci(n-2, p);
        }
        return p[n];
    }
}