#include <iostream>

using namespace std;

int main(void){
    int base, exp, res=1, k=0;

    cout << "Qual a base da potência? ";
    cin >> base;

    cout << "Qual o expoente da potência? ";
    cin >> exp;

    while(k<exp){
        res*=base;
        k++;
    }
    cout << "Resultado: " << res << "\n";
    return 0;
}