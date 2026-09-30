#include <bits/stdc++.h>

using namespace std;

int Fibonacci(int a);

int main(void){
    int N;
    long long int f;
    cin >> N;

    f = Fibonacci(N);
    cout << f << "\n";

    return 0;
}

int Fibonacci(int a){
    if(a==0){
        return 0;
    }else if((a == 1) || (a == 2)){
        return 1;
    }else{
        return (Fibonacci(a-1) + Fibonacci(a-2));
    }
}